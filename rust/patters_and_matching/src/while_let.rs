fn main() {
    let mut stack = Vec::new();

    for i in 1..4 {
        stack.push(i);
    }

    while let Some(top) = stack.pop() {
        println!("{}", top);
    }
}