//Write a program to take x and print multiples of x till 1000.
//Input:100

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    for (int i = 1; i * x <= 1000; i++) {
        cout << i * x << endl;
    }
    
    return 0;
    
}
