#[derive(Debug)]
struct Point<T, U> {
    x: T,
    y: U,
}

impl<T, U> Point<T, U> {
    fn mixup<V, W>(self, other:Point<V, W>) -> Point<T, W> {
        Point {
            x: self.x,
            y: other.y,
        }
    }
}

fn main() {
    let p1 = Point {x: 5, y: 10.7};
    let p2 = Point{x: "Hi", y: "There"};

    let p3 = p2.mixup(p1);

    println!("{:?}", p3);
}