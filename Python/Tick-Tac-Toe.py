from random import randrange

global drawnlist
global victor

def display_board(board):
    print("^--**--" * 3,"^", sep="")
    print(board[0]) 
    print(board[1]) 
    print(board[2]) 
def draw_move(board):
    # The function draws the computer's move and updates the board.
    
    #Right_move=False
    Com_move=randrange(1,10)

    while Com_move not in drawnlist:
        Com_move=randrange(1,10)

    print(name,"'s Move is:",Com_move)
    #while Right_move is False :
    
    for i in range(len(drawnlist)-1):
        if drawnlist[i]==Com_move:
            del drawnlist[i]
        if drawnlist[-1]==Com_move:
            del drawnlist[-1]
    print("What's Left",drawnlist)    
    
    
    
        
    for i in range(len(board[0])):
        if Com_move==board[0][i]:
            board[0][i]="X"
        elif Com_move==board[1][i]:
            board[1][i]="X"
        elif Com_move==board[2][i]:
            board[2][i]="X"
def my_move(board):
    
    my_move=int(input("Enter Your Move:"))

    while my_move not in drawnlist:
        my_move=int(input("Occupied , Enter Your Move again:")) 
    
        
    for i in range(len(drawnlist)-1):
        if drawnlist[i]==my_move:
            del drawnlist[i]
        if drawnlist[-1]==my_move:
            del drawnlist[-1]
    print("What's Left",drawnlist)    
    
    #if my_move in board is True:
    for i in range(len(board[0])):
        if my_move==board[0][i]:
            board[0][i]="O"
        elif my_move==board[1][i]:
            board[1][i]="O"
        elif my_move==board[2][i]:
            board[2][i]="O"
def victory_for(board,sgn):
	if sgn == "X":	# are we looking for X?
		who = 'me'	# yes - it's computer's side
	elif sgn == "O": # ... or for O?
		who = 'you'	# yes - it's our side
	else:
		who = None	# we should not fall here!
	cross1 = cross2 = True  # for diagonals
	
	for rc in range(3):
		if board[rc][0] == sgn and board[rc][1] == sgn and board[rc][2] == sgn:	# check row rc
			return who
		if board[0][rc] == sgn and board[1][rc] == sgn and board[2][rc] == sgn: # check column rc
			return who
		if board[rc][rc] != sgn: # check 1st diagonal
			cross1 = False
		if board[2 - rc][2 - rc] != sgn: # check 2nd diagonal
			cross2 = False
	if cross1 or cross2:
		return who
	return None
        
        
    
    
        #continue #continue # The game is not OVER YET                 
def my_turn():            
    #My Turn
    my_move(board)
    victor=victory_for(board,"O")
    display_board(board)
    return victor
def Com_turn():    
    #NPC Turn
    draw_move(board)
    victor=victory_for(board,"X")
    display_board(board)  
    return victor
            
    
## Where the Magic Begins ##
print("Welcome to Tik-Tac-Toe")


namelist=["Tom","Peter","Mary","Peach","Lil Dicky","Jezzuz","Jeremy"]
name=namelist[randrange(0,7)]

print("Today you are playing with :",name)

#Make a list to keep check what are Drawn
drawnlist = [i+1 for i in range(9)]
del drawnlist[4]
print(drawnlist)

# Board init()
board = [[i+1 for i in range(3)] for j in range(3)]

for i in range(3):
    board[1][i]=i+4
    board[2][i]=i+7
    

if board[1][1]==5: #Middleone = First pick
    board[1][1]="X"




display_board(board)


while len(drawnlist):
    victor=my_turn()
    if victor != None:
	        break
    victor=Com_turn()
    if victor != None:
	        break


if victor == 'you':
    print("You won!")
    
elif victor == 'me':
    print(name,"won")
    
else:
	print("Tie!")
	