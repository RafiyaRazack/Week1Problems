//Write a program using switch case which takes a value and prints the respective Size.
//If size is 29 then its small
//If size is 30 then its Medium
//If size is 38 then its Large
//If size is 42 then its XLarge
//If size is not any of the above then Invalid.

#include <iostream>
using namespace std;

int main(){

    int size;
    //Promt User Input
    cout<<"Enter the size:";
    cin>>size;
    
    switch(size)
    {
        case 29 :cout<<"Small size"<<endl;
                 break;
        case 30 :cout<<"Medium size"<<endl;
                 break;                
        case 38 :cout<<"Large size"<<endl;
                 break;                 
        case 42 : cout<<"XLarge size"<<endl;
                 break;               
        default: cout<< "Invalid";
                 break;         
    }
    return 0;
}