#[derive(Debug)]
pub struct NewsArticle {
    pub headline: String,
    pub location: String,
    pub author: String,
    pub content: String,
}

pub struct Tweet {
    pub username: String,
    pub content: String,
    pub reply: bool,
    pub retweet: bool,

}

pub trait Summary {
    fn summarize(&self) -> String {
        String::from("(Read more...)")
    }
}
fn main() {
    let article = NewsArticle {
        headline: String::from("Penguins win the Stanley Cup Championship!"),
        location: String::from("Pittsburhg, PA, USA"),
        author: String::from("Iceburgh"),
        content: String::from("The Pittburgh Penguins once again are the best \
                                hockey team in the NHl."),
    };

    println!("New article available! {}", article.summarize());
}