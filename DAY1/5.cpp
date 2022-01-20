#include <iostream>

/*
v) Write a program to find the smallest number divisible by all the numbers between 1 to 9.
*/

using namespace std;

int main(){
    int smallestNum=1;
    for(int i=1;i<10;i++)
    {
        //checking if the number is divisible by all numbers from 1-9
       if(smallestNum%i==0)
       {
           continue;
       }
        //if the number is not divisible by all numbers then incrementing the number
       else{
           smallestNum++;
           i=1;
       }
    }
    //printing the number
    cout<<smallestNum<<endl;
    return 0;
}