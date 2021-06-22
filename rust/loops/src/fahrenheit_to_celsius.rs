use std::io;

fn main(){
    loop{
        println!("Enter Fahrenheit:");

        let mut fahrenheit = String::new();

        io::stdin().read_line(&mut fahrenheit).expect("Failed to read line");

        let fahrenheit : u32 = match fahrenheit.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };
        
        };
        println!("{}°F is equivalent to {}°C ",fahrenheit, (fahrenheit - 32) * 5/9 );
}
