# wap to enter a temperature in f and convert it into c

fahrenheit_temperature = float(input("Enter temperature in Fahrenheit: "))
celsius_temperature = (fahrenheit_temperature - 32) * 5/9
print(f"The temperature in Celsius is: {celsius_temperature}")