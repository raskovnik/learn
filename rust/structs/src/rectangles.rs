fn main() {
    let width1 = 30;
    let length1 = 50;

    println!("The area of the rectangle is {} square pixels", area(width1, length1));

}

fn area(width: u32, length: u32) -> u32 {
    width * length
}
