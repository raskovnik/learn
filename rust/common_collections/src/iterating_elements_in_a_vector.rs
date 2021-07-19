fn iter_print() { //iterating over all elements in the vector and printing them
    let v = vec![1, 2, 3];
    for i in &v {
        println!("{}", i);
    }
}

fn iter_change() { //iterating over all elements and changing them
    let mut v = vec![1, 2, 3];
    for i in &mut v {
        *i += 50;
    }
}