#include <iostream>
#include<string.h>

/*
v) Write a program to find the smallest number divisible by all the numbers between 1 to 9.
*/

using namespace std;

int main(){
    int j=1;
    for(int i=1;i<10;i++)
    {
       if(j%i==0)
       {
           continue;
       }
       else{
           j++;
           i=1;
       }
    }
    cout<<j<<endl;
}