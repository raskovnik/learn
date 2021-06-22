fn main() {
    let a = [10, 20, 30, 40, 50];
    let mut index = 0;

    while index < 5 {
        println!("The value is {}", a[index]);

        index += 1;
    }
    for_loop();
    for_loop_cntdwn();
}

fn for_loop() {
    let a = [10, 20, 30, 40, 50];

    for element in a.iter() {
        println!("The value is {}", element);
    }
}

fn for_loop_cntdwn() {
    for number in (1..4).rev() {
        println!("{}", number);
    }
    println!("LIFTOFF");
}