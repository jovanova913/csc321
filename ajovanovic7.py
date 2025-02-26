# Angela Jovanovic
# Lab 7a

x = 4
y = 1.5
z = "box"

if x < 0:
    print("Variable x is negative.")
elif x == 0:
    print("Variable x is zero...")
else:
    print("Variable x is positive!")

if y < 1.0:
    print("Variable y is still in beta...")
elif y == 1.0:
    print("Variable y is 1.0!")
elif y == 1.5:
    print("Variable y is 1.5!")
else:
    print("Variable y is greater than 1.5.")

if z == "tape":
    print("Start the tape...")
elif z == "box":
    print("What's in the box?")
else:
    print("There was a hole here. It's gone now.")
