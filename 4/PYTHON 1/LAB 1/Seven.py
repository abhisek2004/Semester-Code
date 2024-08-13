# wap to enter time in mitutes and print it in hour and minutes format

print("Enter total minutes:")
minutes = int(input())
hours = minutes // 60
remaining_minutes = minutes % 60
print( "Hours:", hours,"Minutes" ,remaining_minutes)