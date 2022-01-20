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
    //taking input from user
    cout<<"Enter any number: ";
    cin>>num;
    //Find last digit
    lastDigit  = num % 10;
    //Find total number of digit - 1
    digits     = (int)log10(num); 
    ///Find first digit
    firstDigit = (int)(num / pow(10, digits)); 
    //putting number togeather in first and last digit reversed order
    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    cout<<num<<endl;
    cout<<swappedNum<<endl;

    return 0;
}