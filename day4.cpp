#include <iostream>
using namespace std;

int main() {
    double price = 1000;

   
    double discountedPrice = price - (price * 10 / 100); // // Apply 10% discount on original price.

    double finalPrice = discountedPrice + (discountedPrice * 18 / 100); //Add 18% tax on discounted price.

    cout << "Final Price = " << finalPrice << endl;

    return 0;
}