#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book book1("The Wings of fire", "Dr. APJ Abdul Kalam");
    Book book2("Harry Potter", "J.K. Rowling");
    cout << "Book 1:" << endl;
    book1.display();
    cout << "\nBook 2:" << endl;
    book2.display();

    return 0;
}
