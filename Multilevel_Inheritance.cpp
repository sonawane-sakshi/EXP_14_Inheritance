//Sakshi Sonawane
//PRN:24070123505
#include <iostream>
using namespace std;

class Food {
public:
    string cuisine = "Indian";
    void type() {
        cout << "Asian" << endl;
    }
};

class Dish : public Food {
public:
    string dish = "Biriyani";
};

class Restaurant : public Dish {
public:
    string name = "Spice Kitchen";
};

int main() {
    Restaurant myRestaurant;
    cout << "Restaurant Name: " << myRestaurant.name << endl;
    cout << "Cuisine: " << myRestaurant.cuisine << endl;
    cout << "Dish: " << myRestaurant.dish << endl;
    cout << "Type of cuisine: ";
    myRestaurant.type();

    return 0;
}

