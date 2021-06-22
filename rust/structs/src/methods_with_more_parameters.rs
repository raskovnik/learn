struct Rectangle {
    width: u32,
    length: u32,
}

impl Rectangle {
    fn area(&self) -> u32 {
        self.width * self.length
    }

    //comparing the dimensions of the rectangles
    fn can_hold(&self, other: &Rectangle) -> bool {
        self.width > other.width && self.length > other.length
    }

    //comparing the areas of the two rectangles
    fn can_hld(&self, other: &Rectangle) -> bool {
        self.area() > other.area()
    }

    // creating an associated function -> functions within impl blocks that don't take self as a parameter
    fn square(size: u32) -> Rectangle {
        Rectangle {
            width: size,
            length: size,
        }
    }
}

fn main() {
    let rect1 = Rectangle {
        width: 30,
        length: 50,
    };

    let rect2 = Rectangle {
        width: 10,
        length: 40,
    };

    let rect3 = Rectangle {
        width: 60,
        length: 45,
    };

    //call the associated function created in the impl block
    let sq = Rectangle::square(7);

    println!("Can rect1 hold rect2? {}", rect1.can_hold(&rect2));
    println!("Can rect1 hold rect3? {}", rect1.can_hold(&rect3));

    println!("can rect1 hold rect2? {}", rect1.can_hld(&rect2));
}