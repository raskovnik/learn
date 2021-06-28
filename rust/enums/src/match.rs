// match compares a value against a series of patterns ad then execute code based on which pattern it matches
// a simple program that takes in an unknown coin and determines which coin it is and returns its calue in cents

enum Coin {
    Penny,
    Nickel,
    Dime,
    Quarter,
}

fn value_in_cents(coin: Coin) -> u8 {
    match coin {
        Coin::Penny => 1,
        Coin::Nickel => 5,
        Coin::Dime => 10,
        Coin::Quarter => 25,
        
    }
}