#[derive(Debug)]
struct Rectangle {
    width: u32,
    length: u32,
}

impl Rectangle{
    fn can_hold(&self, other: &Rectangle) -> bool {
        self.width > other.width && self.length  > other.length
    }
}

pub fn add_two(a: i32) -> i32 {
    internal_adder(a, 2)
}

fn internal_adder(a: i32, b: i32) -> i32 {
    a + b
}
pub fn greeting(name: &str) -> String {
    //String::from("hello")
    format!("Hello {}!", name)
}

pub struct Guess {
    value: i32,
}

impl Guess {
    pub fn new(value: i32) -> Guess {
        if value < 1 {
            panic!("Guess value must be greater than or equal to 1, got {}", value);
        } else if value > 100 {
            panic!("Guess value must be less than or equal to 100, got {}", value);
        } 
        

        Guess {value}
    }
}
#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn larger_can_hold_smaller() {
        let larger = Rectangle {
            width : 8,
            length : 7,
        };
        let smaller = Rectangle {
            width: 5,
            length: 1,
        };

        assert!(larger.can_hold(&smaller));
    }

    #[test]
    fn smaller_cannot_hold_larger() {
        let smaller = Rectangle {
            width: 7,
            length: 4,
        };
        let larger = Rectangle {
            width : 15,
            length : 46,
        };

        assert!(!smaller.can_hold(&larger));
    }
    #[test]
    fn it_adds_two() {
        assert_eq!(4, add_two(2));
    }
    
    // adding custom failure messages
    #[test]
    fn greeting_contains_name() {
        let result = greeting("carol");
        assert!(result.contains("carol"),
                "Greeting did not contain name, value has '{}'",
                result);
    }

    //using the should_panic
    #[test]
    // add expect parameter to make sure that the failure message contains the provided text
    #[should_panic(expected = "Guess value must be less than or equal to 100")]
    fn greater_than_100() {
        Guess::new(200);
    }

    // using Result<T, E> in test
    #[test]
    fn it_works() -> Result<(), String> {
        if 2 + 2 == 4 {
            Ok(())

        } else {
            Err(String::from("Two plus two does not equal four"))
        }
    }

    // ignoring tests unless specifically requested
    // #[test]
    // #[ignore]
    // fn expensive_test(a: i32) -> i32 {
    //     a
    // }

    #[test]
    fn internal() {
        assert_eq!(4, internal_adder(2,2));
    }

}