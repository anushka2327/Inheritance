#include <iostream>
#include <string>
using namespace std;

// Parent Class
class Animal {
public:
    string types[3] = {"Dog", "Cat", "Rabbit"};
    void species() {
        cout << "Common Pets" << endl;
    }
};

// Child Class for Dog
class Dog : public Animal {
private:
    string breed;
public:
    Dog(string b) : breed(b) {}
    void display() {
        species();
        cout << types[0] << ": " << breed << endl;
    }
};

// Child Class for Cat
class Cat : public Animal {
private:
    string breed;
public:
    Cat(string b) : breed(b) {}
    void display() {
        species();
        cout << types[1] << ": " << breed << endl;
    }
};

// Child Class for Rabbit
class Rabbit : public Animal {
private:
    string breed;
public:
    Rabbit(string b) : breed(b) {}
    void display() {
        species();
        cout << types[2] << ": " << breed << endl;
    }
};

// Main Function
int main() {
    Dog dog("Labrador");
    dog.display();

    Cat cat("Siamese");
    cat.display();

    Rabbit rabbit("Holland Lop");
    rabbit.display();

    return 0;
}output:
Common Pets
Dog: Labrador
Common Pets
Cat: Siamese
Common Pets
Rabbit: Holland Lop