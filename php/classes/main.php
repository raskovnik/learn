<?php 
class Book {
    var $title;
    var $author;
    var $pages;

}

$book1 = new Book;
$book1->title = "Harry Potter";
$book1->author = "JK Rowling";
$book1->pages = 400;

class Books {
    var $title;
    var $author;
    var $pages;

    function __construct($title, $author, $pages) {
        $this->title = $title;
        $this->author = $author;
        $this->pages = $pages;
    }
}

$book = new Books("Lord of the Rings", "Tolkien", 750);
echo $book->author;

class Student {
    var $name;
    var $major;
    var $gpa;

    function __construct($name, $major, $gpa) {
        $this->name = $name;
        $this->major = $major;
        $this->gpa = $gpa;
    }

    function hasHonors() {
        if ($this->gpa > 3.5) {
            return "<br>true<br>";
        } else {
            return "<br>false<br>";
        }
    }
}

$student1 = new Student("Jim", "Business", 2.8);
$student2 = new Student("Pam", "Art", 3.6);

echo $student1->hasHonors();
echo $student2->hasHonors();

class Movie {
    public $title;
    private $rating;

    function __construct($title, $rating) {
        $this->title = $title;
        $this->rating = $rating;
    }

    function setRating($rating) {
        if ($rating == "G" || $rating == "PG-13" || $rating == "G") {
            $this->rating = $rating;
        } else {
            $this->rating = "NR";
        }
    }

    function getRating() {
        return $this->rating;
    }
}

$movie1 = new Movie("Avengers", "PG-13");
echo $movie1->getRating();

class Chef {
    function makeChicken() {
        echo "The chef makes chicken<br>";
    }

    function makeSalad() {
        echo "The chef makes salad<br>";
    }

}
$chef1 = new Chef();
$chef1->makeChicken();

class ItalianChef extends Chef {
    function makePasta() {
        echo "<br>The Italian chef makes pasta";
    }
}

$ichef = new ItalianChef();
$ichef->makeChicken();
$ichef->makePasta();
?>