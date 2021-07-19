fn main() {
    for c in "नम�ते".chars() {
        println!("{}", c);
    }
}

fn bytees() { //this code will print bytes that make up the string
    for c in "नम�ते".bytes() {
        println!("{}", c)
    }
}