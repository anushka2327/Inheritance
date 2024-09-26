#include <iostream>
#include <string>
using namespace std;

class Library {
public:
    string libraryName = "Central Library: ";
    void section() {
        cout << "Fiction" << endl;
    }
};

class Book : public Library {
public:
    string title = "To Kill a Mockingbird";
};

int main() {
    Book b1;
    b1.section();
    cout << b1.libraryName + " " + b1.title << endl;

    return 0;
}
output:
Fiction
Central Library: To Kill a Mockingbird