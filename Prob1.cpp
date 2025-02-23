//Write a program that takes an integer, then a string, then a char from the user and prints them in the screen.

#include<iostream>
using namespace std;

int main(){
    int Number;
    string Name;
    char Initial;
    //Promt user Input
    cout<<"Enter the Number: ";
    cin>>Number;
    cout<<"Enter the Name: ";
    cin>>Name;
    cout<<"Enter the Initial: ";
    cin>>Initial;
    //Print the Input Values
    cout<<Number<<endl;
    cout<<Name<<endl;
    cout<<Initial<<endl;
    return 0;
}