# Evan Oosterveld
# Using python for easy string manipulation this short program shifts the characters in a string by 
# a given input. Run in an enviornment such as Jupytor Notebook or on the command line as "pyhton3 num2.py".

string = input("Enter a string: ")
rotate = input("Enter rotation: ")
rotate = int(rotate) #convert input from string to int.
# If a number is over the string length then the shifting amount needs to be recalculated as to not
# go out of bounds when cutting a string.
if (rotate >= len(string)): 
    rotate = rotate % len(string)
stringSlice = string[-rotate:]
string = string[:-rotate]
finalString = stringSlice + string
print(finalString)