print("Welcome to the GPA calculator.")
print("Please enter all your letter grades one at a time, per line.")
print("Enter a blank line to designate the end")

points = {"A+" :4.0, "A" :4.0, "A-" :3.67, "B+" :3.33, "B" :3.0, "B-" :2.67,
            "C+" :2.33, "C" :2.0, "C-" :1.67, "D+" :1.33, "D" :1.0, "F" :0.0}

courses, t_points, done = 0 , 0, False

while not done:
    grade = input().upper()
    if grade == "":
        done = True
    elif grade not in points:
        print(f"unknown grade {grade} being ignored")
    else:
        courses += 1
        t_points += points[grade]
if courses > 0:
    print(f"Your GPA is {t_points/courses}")


