fn main() {
    //creating a new empty vector to hold values of type i32
    let v: Vec<i32> = Vec::new();

    //creating a vector containing values
    let x = vec![1, 2, 3];

    //creating a vector and adding elements to it
    let mut v = Vec::new();
    v.push(5);
    v.push(6);

    for element in v.iter() {
        println!("{}", element);
    }

}

fn access_v1() {
    let v = vec![1, 2, 3, 4, 5];
    let third: &i32 = &v[2];
    println!("The third element is {}", third);

}

fn access_v2() {
    let v = vec![1, 2, 3];
    match v.get(2) {
        Some(third) => println!("The third element is {}", third),
        None => println!("There is not third element."),
    }
}