#include <iostream>
#include <math.h>

using namespace std;
/*
ii) Write a program (without using inbuilt functions and not using Strings or array) to swap 
first and last digits of any number
*/

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    cout<<"Enter any number: ";
    cin>>num;

    lastDigit  = num % 10;

    digits     = (int)log10(num); 

    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    cout<<num<<endl;
    cout<<swappedNum<<endl;

    return 0;
}