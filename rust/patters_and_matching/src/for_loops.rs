struct Point {
    x: i32, 
    y: i32,
}

fn main() {
    let v = vec!['a', 'b', 'c'];

    for (index, value) in v.iter().enumerate() {
        println!("{} is at index {}", value, index);
    }

    let p = Point { x: 0, y: 7};

    let Point {x: a, y: b} = p;
}