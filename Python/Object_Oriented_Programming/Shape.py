from math import hypot, pi
from random import randint

class Point:
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y

    def distance_from_origin(self):
        return hypot(self.x, self.y)

    def __eq__(self, other):
        return self.x == other.x and self.y == other.y

    def __repr__(self):
        return "Point({0.x!r})".format(self)

    def __str__(self):
        return "({0.x!r}, {0.y!r})".format(self)

a = Point(randint(1,100),randint(1,100))
print(f"Point {a}")
print(f"Point {a} is {a.distance_from_origin()} units from the origin")


#Inheritance and polymorphism
class Circle(Point):
    def __init__(self, radius, x = 0, y = 0):
        super().__init__(x, y)
        self.radius = radius

    def edge_distance_from_origin(self):
        return abs(self.distance_from_origin - self.radius)

    def area(self):
        return pi * (self.radius ** 2)
    
    def circumference(self):
        return 2 * pi * self.radius

    def __eq__(self, other):
        return self.radius == other.radius and super().__eq__(other)

    def __repr__(self):
        return "Circle({0.radius!r}, {0.x!r}, {0.y!r})".format(self)

    def __str__(self):
        return repr(self)

b = Circle(randint(1, 100), randint(1, 100), randint(1, 100))
print(f"Circle {b} is {b.distance_from_origin()} units from the origin.")
