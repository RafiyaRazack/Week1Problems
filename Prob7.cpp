//Write a program to get firstName and lastName and n as input and print fullName that is firstName+lastName for n times.
//Input: Nandy Raja 5

#include <iostream>
using namespace std;

int main(){
    string FirstName;
    string LastName;
    int n;
    cout <<"Enter the FirstName:";
    cin>> FirstName;
    cout <<"Enter the LastName:";
    cin>> LastName;
    cout <<"Enter the Number:";
    cin>>n;
    string fullName = FirstName + LastName;
    
    for (int i = 0; i < n; i++) {
        cout << fullName << endl;
    }   
    return 0;    
}

;
    
    