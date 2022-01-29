#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int n,int m,int target)
{
    int i=0,j=m-1;
    while(j>0 && i<n)
    {
        if(arr[i][j]>target)
        {
            j--;
        }
        if(arr[i][j]<target)
        {
            i++;
        }
        if(arr[i][j]==target)
        {
            cout<<"found at "<<i<<","<<j<<endl;
            return true;
        }
    }
    cout<<"not found"<<endl;
    return false;
}


int main()
{
    int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int size=sizeof(arr)/sizeof(arr[0][0]);
    isPresent(arr,3,4,7 );

    return 0;
}