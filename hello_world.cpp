/**
 * Reviewing some C++ basic code
**/
#include <iostream>
using namespace std;

class Book {
    public: // attuributes if "private" we need getters and setters
        string title;
        string author;
        int pages;

        void page() {
            cout << "page" << endl;
        }
};

class FantasyBook : public Book{ // subclass can have additonal functions/methods
    public:
        void hi() {
            cout << "hi" << endl;
        }
};

class Novel {
    public: // attuributes if "private" we need getters and setters
        string title;
        string author;
        int pages;

        Novel(string t, string a, int p) {
            this->title = t;
            this->author = a;
            this->pages = p;
        }
};

class Dog {
    private:
        int size;
    public:
        string name;
        Dog(int s, string n) {
            this->size = s;
            this->name = n;
        }

        int getSize() {
            return this->size;
        }
        void setSize(int s) {
            this->size = s;
        }
};

struct product {
    int weight;
    double price;
} apple; // we can declare names of prodict here - apple, banana, etc

void hello(string name) {
    cout << "Hello, " << name << endl;
}

string date(int date) {
    string day;
    switch(date) {
        case 0: 
            day = "Sunday";
            break;
        case 5:
            day = "Friday";
            break;
        default: // for invalid input
            day = "Invalid";
    }
    return day;
}

int main() {

    string name = "Daisuke";
    //std::cout << "Hello, " << name << endl;

    // data types:
    /**
     * char c = 'A';
     * string str = "abcd";
     * int i = 1;
     * double d = 1.5; (:= float)
     * bool b = true;
     * 
    **/

    // getting input from user
    /**
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "You entered " << number << endl;
    (For string input)
    string name;
    getline(cin, name);
    cout << "Hello " << name << endl;
    **/

    // array and intro to pointers
    int nested_array[5][5];
    int array[] = {1, 2, 3};
    int new_array[3];
    //new_array[0] = array[0]; // not referring to the same memory; value type
    int *x = &array[0]; // pointer to the memory of array[0]
    *x = 4;
    cout << array[0] << endl;
    
    // function
    hello("Daisuke");

    // switch statement (specil type of if statemnt)
    cout << date(10) << endl;

    // Pointers
    int num = 10;
    int *memory = &num;
    *memory = 5;
    cout << num << endl;

    // Class and Objects
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    // Constructor
    Novel novel1("T", "a", 10);
    Novel *novel2 = &novel1;
    novel2->title = "B";
    cout << novel1.title << endl;

    // Private, Getter, Setter
    Dog dog1(3, "Puppy");
    cout << dog1.name << endl;

    // Inheritance
    FantasyBook fbook;
    fbook.page();
    fbook.hi();

    // Class vs Structure
    // Class is private (unless stated public) and reference type, whereas
    // Structure is public and value type
    product p1;
    p1.price = 9.99;
    p1.weight = 10;

    apple.price = 1.50;
    apple.weight = 2;

    product *p2 = &apple;
    p2->price = 1.75;
    cout << apple.price << endl;

    return 0;
}