def is_year_leap(year):

    if year%4==0:
        return True
    else:
        return False



def days_in_month(year, month):
    
    if month>12 or month<1:
        print("Error")
        return
            
    if  month == 2:   # Special for Feb
        if is_year_leap(year)== True:
            return 29
        else:
            return 28
    
    elif month ==1 or 3 or 5 or 7 or 8 or 10 or 12:
        return 31  # Months that have 31 Days
    
    else:
        return 30
        
    
        
    

test_years = [1900, 2000, 2016, 1987]
test_months = [2, 2, 1, 11]
test_results = [28, 29, 31, 30]
for i in range(len(test_years)):
	yr = test_years[i]
	mo = test_months[i]
	print(yr, mo, "->", end="")
	result = days_in_month(yr, mo)
	if result == test_results[i]:
		print("OK")
	else:
		print("Failed")


