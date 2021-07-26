fn main() {
    let mut s = String::new(); //creating a new empty string

    let data = "initial contents";

    let s = data.to_string();
    println!("{}", s);

    //method also works on a literal directly
    let x  = "initial contents".to_string();
    println!("{}", x);
}

//updating a string
fn upd_string() {
    let mut s = String::from("foo");
    s.push_str("bar");

    //adding characters using push
    s.push("!");
}

//concatenating strings
fn concat() {
    let s1 = String::from("Hello, ");
    let s2 = String::from("world!");
    let s3 = s1 + &s2; // s1 has been moved here and can no longer be used
}

fn frmat() {
    let s1 = String::from("tic");
    let s2 = String::from("tac");
    let s3 = String::from("toe");

    let s = format!("{}-{}-{}", s1, s2, s3);
}