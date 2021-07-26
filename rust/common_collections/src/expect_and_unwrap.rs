use std::fs::File;

fn main() { // both unwrap and expect call panic! in case hello.txt doestn't exist
    let f = File::open("Hello.txt").unwrap();
    let f1 = File::open("Hello.txt").expect("Failed to open file"); // better
}