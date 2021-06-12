fn main() {
    another_function(5);
    yet_another_function(1,2);
}

fn another_function(x : i32) {
    println!("The value of x is : {}", x);
    
}

fn yet_another_function(x : i32, y : i32) {
    println!("The value of x is: {}", x);
    println!("The value of y is: {}", y);
}