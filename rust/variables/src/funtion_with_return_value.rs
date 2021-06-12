fn main() {
    let x = five();

    println!("The value of x is : {}", x);
    println!("{} + 1 is {}", x, plus_one(x))
}

fn five() -> i32 {
    5
}

fn plus_one(x : i32) -> i32 {
    x + 1
}