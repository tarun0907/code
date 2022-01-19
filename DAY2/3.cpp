#include <bits/stdc++.h>
using namespace std;

/*
 Write a program to print the below pattern:
(N should be an odd number and the value of N should be more than 4)
Output: 
        \*****/
        *\***/*
        **\*/**
        ***/***
        **/*\**
        */***\*
        /*****\
*/

int main()
{
    int input,a = 1;
    cin >> input;
    int b = input;
    if (input > 4 && input % 2 != 0)
    {
        for (int i = 1; i <= input; i++)
        {
            for (int j = 1; j <= input; j++)
            {
                if (j == a)

                    cout << "\\";

                else if (j == b)

                    cout << "/";

                else

                    cout << "*";
            }
            a++;
            b--;
            cout << endl;
        }
    }
    else
    {
        cout<<"invalid input"<<endl;
    }

    return 0;
}