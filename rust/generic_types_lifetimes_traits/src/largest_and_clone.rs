fn largest<T: PartialOrd>(list: &[T]) -> &T {
    let mut largest = &list[0];
    for item in list {
        if item > largest {
            largest = &item;
        }
    }
    largest
}

fn main() {
    let number_list = vec![42,45,5,7,3,456546,8809];
    let result = largest(&number_list);
    println!("The largest number is {}", result);

    let char_list = vec!['a', 'b', 'c', 'd', 'e'];
    let result = largest(&char_list);
    println!("The largest char is {}", result);
}