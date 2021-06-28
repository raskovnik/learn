//program to print out values that only match 1, 3, 5, or 7
fn main() {
    let some_u8_value = 0u8;
    match some_u8_value {
        1 => println!("One"),
        3 => println!("Three"),
        5 => println!("Five"),
        7 => println!("Seven"),
        _ => (), // the _ placeholder will match any value so it is placed after all the other arms
        
    }
}