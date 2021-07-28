struct Point1<T> { //struct that accepts only one type for both x and y
    x: T,
    y: T,
}

impl<T> Point1<T> {
    fn x(&self) -> &T {
        &self.x
    }
}
struct Point2<T, U> { //struct that accepts two types for x and y
    x: T,
    y: U,
}
fn main() {
    let integer = Point1 {x: 5, y: 10};
    let float = Point1 {x: 5.0, y: 10.0};
    println!("float.x: {}", float.x());

    let both_int = Point2 {x: 5, y: 10};
    let both_float = Point2 {x: 5.0, y: 10};
    let integer_and_float = Point2 {x: 5, y: 10.0};
}