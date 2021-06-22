fn clone_() {
    let s1 = String::from("hello");
    let s2 = s1.clone();

    println!("s1 : {}, s2 : {}", s1, s2)
}

fn integers() {
    let x = 3;
    let y = x;

    println!("x : {}, y : {}", x, y);
}