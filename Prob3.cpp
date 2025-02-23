//Given mark of student, Print the Grade
//Grade A if mark is greater than or equal to 90
//Grade B if mark is greater than or equal to 80
//Grade C if mark if greater than or equal to 60
//Grade D if mark if greaer than or equal to 35
//Fail if mark is lesser than 35

#include <iostream>
#include <math.h>
using namespace std;

int main(){

int Mark;
//Promt the user Input
cout<<"Enter the Student Mark:";
cin>>Mark;

if (Mark >= 90)
{
    cout<<"Grade A"<< endl;
}
else if (Mark >= 80)
{
    cout<<"Grade B"<< endl;
}
else if (Mark >= 60)
{
    cout<<"Grade C"<< endl;
}
else if (Mark >= 35)
{
    cout<<"Grade D"<< endl;
}
else if(Mark < 35)
{
    cout <<"Fail";
}
return 0;
}