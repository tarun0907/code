#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*

 Write a function that takes in a non-empty array of distinct integers and an 
 integer representing a target sum. The function should find all triplets in the
  array that sum up to the target sum and return a two-dimensional array of all these triplets. 
  The numbers in each triplet should be ordered in ascending order, and the triplets themselves should 
  be ordered in ascending order with respect to the numbers they hold. If no three numbers sum up to the
   target sum, the function should return an empty array
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


vector<vector<int>> findTriplets(int arr[], int n, int target)
{
    bubble_sort(arr,n);

    vector<vector<int>> ans;
    bool found = false;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == target)
                {
                
                    ans.push_back({arr[i],arr[j],arr[k]}); 
                    found = true;
                }
            }
        }
    }

    if (found == false)
        cout << " not exist "<<endl;

    return ans;
}

int main()
{
    int arr[] = {0,1,2,6,4,3,5},target;
    int noElements = sizeof(arr)/sizeof(arr[0]);
    cin>>target;
    vector<vector<int>> v=findTriplets(arr,noElements,target);
    
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }   
        cout << endl;
    }
           
    return 0;
}