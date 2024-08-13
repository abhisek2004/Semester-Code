# wap to enter a percentage and display the gradation system.
percentage = float(input("Enter the percentage: "))

if 90 <= percentage <= 100:
    print('Grade: 0')
elif 80 <= percentage < 90:
    print('Grade: A')
elif 70 <= percentage < 80:
    print('Grade: B')
elif 60 <= percentage < 70:
    print('Grade: C')
elif 50 <= percentage < 60:
    print('Grade: D')
elif 40 <= percentage < 50:
    print('Grade: E')
elif 0 <= percentage < 40:
    print('Grade: F')
else:
    print('Invalid Percentage')
