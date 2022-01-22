#include<iostream>
using namespace std;


int medianOfArrays(int arr1[],int arr2[],int size1,int size2)
{
    int arr3[size1+size2]={0};
    int i;
    for(i=0;i<size1;i++)
    {
        arr3[i]=arr1[i];
    }
    
    int k=i;
    int j=0;
    for(i;i<size2+k;i++)
    {
        arr3[i]=arr2[j];
        j++;
    }

    

 
    
    int median=(size1+size2)/2;
    return arr3[median];
    
}

int main()
{
    
    int arr1[]={1,2,3},arr2[]={4,5,6,7,8,9};
    int size1=sizeof(arr1) / sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout <<medianOfArrays(arr1,arr2,size1,size2)<<endl;
    return 0;

}