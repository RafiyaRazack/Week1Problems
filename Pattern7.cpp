#include<iostream>
#include<math.h>
using namespace std;

    int main()
    {
        int n= 4;
        for(int i = n; i >= 1; i--)
        {
            for(int j = i; j >= 1; j--)
            {
                cout << j;
            }
            cout << endl;
        }
        return 0;
    }
