struct CustomSmartPointer {
    data : String,
}

impl Drop for CustomSmartPointer {
    fn drop(&mut self) {
        println!("Droping CustomSmartPointer with data '{}'", self.data);
    }
}

fn main() {
    let a = CustomSmartPointer{data: String::from("some data"),};
    println!("Custom Smart Pointer");
    drop(a);
    println!("CustomSmartPointer dropped before the end of the main");

    let c = CustomSmartPointer{data: String::from("my stuff"),};

    let d = CustomSmartPointer{data: String::from("other stuff"),};
    println!("CustomSmartpointers created.");
}