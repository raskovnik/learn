#creating a list of all leap years in a certain range
leaps = []
for year in range(1900, 1940):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        leaps.append(year)

print("Leap years from 1900 to 1940 are :", leaps)

#list comprehension
leaps2 = [y for y in range(1900, 1940) if y % 4 == 0 and y % 100 != 0 or y % 4 == 0]
print("Using list comprehension: ", leaps2)