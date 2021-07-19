mod front_of_house {
    pub mod hosting {
        pub fn add_to_waitlist() {}

    }
}
//adding use and a path in a scope is similar to creating a symbolic link in the file system
use crate::front_of_house::hosting;

//an item can be brought into scope using use and a relative path
use self::front_of_house::hosting;

//making a name available for any code to use from a new scope with pub use
pub use::front_of_house::hosting;

pub fn eat_at_restaurant() {
    hosting::add_to_waitlist();
    hosting::add_to_waitlist();
    hosting::add_to_waitlist();

}