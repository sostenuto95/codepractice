rooms = [[[False for r in range(20)] for f in range(15)] for t in range(3)] 
# 3 Buildings each with 15 Floors and 15 Rooms ALL Vancant == False 

rooms[1][9][13] = True  #2nd Building's [10Floor's [Room 14]] is not Occupied 
rooms[0][4][1] = False #1st Building's [5Floor's [Room 2]] has just checked out

for odd in range(15):
    if(odd%2==0):  # All Odd floors 
        for rooms3 in range(20): #Someone booked the whole Floor(20 Rooms)
            rooms[2][odd][rooms3] = True 

# All Rooms in  Odd Floors at Building 3 are booked 

vacancy = 0


for floor_number in range(15): # Total 300 Vacancy @ Build 3 
    for room_number in range(20):
        if not rooms[2][floor_number][room_number]:
            vacancy += 1 

print(vacancy) # 300 - 160 == 140 Vacancies
