fn main() {
    let mut s = String::from("Hello");
    s.push_str(", world!"); // push_str() appends a literal to a String

    println!("{}", s);
    // should print "Hello, world!"
}