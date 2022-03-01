def factorial(n):
    if n < 1:
         return None
         
    factorial = 1
    for value in range(1,n+1):  
        factorial*=value 
    return factorial
   

def smart_factorial(n):
    if n == 1:    # The base case (termination condition.)
        return 1
    else:
        return n * factorial(n - 1) #n-- until 1 



for n in range(1, 10):
    print(n, "->", factorial(n))
