#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
public:
    Book(const string& title_, const string& author_, double price_)
        : title(title_), author(author_), price(price_ > 0 ? price_ : 0.0) {}
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }
    bool setPrice(double newPrice) {
        if (newPrice > 0) {
            price = newPrice;
            return true;
        }
        return false;
    }
};

int main() {
    Book b("1984", "George Orwell", 15.5);
    cout << "Title: " << b.getTitle() << "\nAuthor: " << b.getAuthor() << "\nPrice: " << b.getPrice() << endl;
    if (!b.setPrice(-10)) {
        cout << "Attempt to set negative price rejected.\n";
    }
    b.setPrice(12.0);
    cout << "New price: " << b.getPrice() << endl;
    return 0;
}
