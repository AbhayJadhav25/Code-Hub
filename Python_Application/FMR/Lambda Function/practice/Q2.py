#Q2. Use `map()` with a lambda to convert a list of Celsius values to Fahrenheit in one line.

temps = [0, 20, 37, 100]
cels_to_fahrenheit = list(map(lambda x : round(x * (9/5)+32 , 2), temps))
print(cels_to_fahrenheit)