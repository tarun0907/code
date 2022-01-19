#include<iostream>
using namespace std;

/*
i)Write a program to remove duplicate values from an array and
 returns an array of unique values. int[] removeDuplicates(int[]values)
*/

void bubble_sort(int a[],int n)
{

    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}



int removeDuplicates(int arr[], int n)
{
    bubble_sort(arr,n);
    if (n==0 || n==1)
        return n;

    int temp[n];
    int j = 0;
    for (int i=0; i<n-1; i++)

        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];


    temp[j++] = arr[n-1];


    for (int i=0; i<j; i++)
        arr[i] = temp[i];

    return j;
}

int main()
{
    int arr[] = {10, 12, 12, 3, 1, 1, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    for (int i=0; i<n; i++)
       cout << arr[i] << " ";

    return 0;
}


