use std::collections::HashMap;
fn main() {

    let mut scores = HashMap::new(); //creating a new hashmap

    //adding elements to the hashmaps
    scores.insert(String::from("blue"), 10);
    scores.insert(String::from("yellow"), 50);

    //accessing values in a hash map
    let team_name = String::from("blue");
    let score = scores.get(&team_name);

    for (key, value) in &scores {
            println!{"{}: {}", key, value};
    }

}