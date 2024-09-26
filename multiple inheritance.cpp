#include <iostream>
#include <string>
using namespace std;

// Parent Class-1
class Brand {
public:
    string name = "Apple";
    void model() {
        cout << "iPhone 14" << endl;
    }
};

// Parent Class-2
class Features {
public:
    string batteryLife = "20 hours";
    void color() {
        cout << "Black and Silver" << endl;
    }
};

// Child Class (derived from Brand and Features)
class Smartphone : public Brand, public Features {
public:
    string storage = "128 GB";
};

int main() {
    // Multiple Inheritance
    Smartphone phone;
    phone.color();
    cout << phone.name << " ";
    phone.model();
    cout << "(" << phone.storage << ")" << endl << "BATTERY LIFE: " << phone.batteryLife << endl;

    return 0;
}
output :
Black and Silver
Apple iPhone 14
(128 GB)
BATTERY LIFE: 20 hours