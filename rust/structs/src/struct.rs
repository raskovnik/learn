// defining a struct
struct User {
    username: String, 
    email: String, 
    sign_in_count: u64,
    active: bool,
}

// creating an instance of the struct
fn main() {
    let user1 = User {
        email: String::from("another@example.com"),
        username: String::from("anotherusername567"),
        active: true,
        sign_in_count: 1,
    };
}

fn build_user(email: String, username: String) -> User {
    User {
        email: email,
        username: username,
        active: true,
        sign_in_count: 1,
    }
}

// a build_user function that uses the Field init shorthand when fields have the same name

fn build_user1(email: String, username: String) -> User {
    User {
        email,
        username,
        active: true,
        sign_in_count: 1,

    }
}

// creating instances from other instances with struct update syntax
fn build_user2(email: String, username: String) -> User {
    User{
        email,
        username,
        ..user1
    }
}
// defining tuple structs
struct Color(i32, i32, i32);
struct Point(i32, i32, i32);