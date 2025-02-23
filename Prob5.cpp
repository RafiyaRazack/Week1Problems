//Write a program which takes two values x and y. Prints x for y number of times.
//Explanation - 2 is x and 3 is y in the input. So 2 is printed 3 times on the output.
#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    
    // Printing x for y times
    for (int i = 0; i < y; i++) {
    cout  << x << " ";
    }
    return 0;
   
}