# Angela Jovanovic
# Lab 12

def recArea(base, height):
    return base * height

def recCircle(radius):
    return radius * radius * 3.14

def main():
    base = 0.0
    height = 0.0
    radius = 0.0
    rectangle = 0.0
    circle = 0.0

    base = float(input("Enter a value for the base of a rectangle: "))
    height = float(input("Enter a value for the height of the rectangle: "))
    rectangle = recArea(base, height)
    print("The area of your rectangle is: ", rectangle)

    radius = float(input("\nEnter a value for the radius of a circle: "))
    circle = recCircle(radius)
    print("The area of your circle is: ", circle)

main()
