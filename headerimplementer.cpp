#include <iostream>
#include "header.h"
using namespace std;

int main(){
    int num;
    int square;
    cout << "Enter a number to find the square of: ";
    cin >> num;

    square = calculateSquare(num);
    cout << "The square of the number " << num << " is: " << square << endl;

    return 0;
}