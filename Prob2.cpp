//Write a program to check whether a triangle can be formed with the given values for the angles.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int sum;
    //Promt user Input
    cout<<"Enter the angle value a of the triangle: ";
    cin>>a;
    cout<<"Enter the angle value b of the triangle: ";
    cin>>b;
    cout<<"Enter the angle value c of the triangle: ";
    cin>>c;
    sum = a+b+c;
    if(sum == 180)
    {
        cout<<"Triangle can be formed";
    }
    else{
        cout<<"Triangle cannot be formed";
    }
    return 0;
}