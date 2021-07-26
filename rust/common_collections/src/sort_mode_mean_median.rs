use std::collections::HashMap;

fn main() {
    let mut list: Vec<i32> = vec![5,3,6,7,2,1,0,9,6,5,3,6,5,3,4,2,4,2,5,7,7];
    for i in 0..list.len() {
        let mut l_index = i;
        for j in i + 1..list.len() {
            if list[j] < list[l_index] {
                l_index = j;
            }
        }
        if l_index != i {
            list.swap(l_index, i);
        }
    }
    println!("{:?}", list);
    println!("Median: {}", list[list.len() / 2]);

    let mut n_count = HashMap::new();
    for d in list.iter() {
        let count = n_count.entry(d).or_insert(0);
        *count += 1;
    } 

    let mut max_val = 0;
    let mut max_key:i32 = 0;
    for (key, value) in n_count.iter() {
        if *value > max_val {
            max_key = **key;
            max_val = *value;
        }
    }
    println!("Mode: {}", max_key);

    let mut sum = 0;
    for digit in list.iter() {
        sum += digit;
    }
    
    println!("Mean: {}", sum / (list.len() as i32 + 1) )
}