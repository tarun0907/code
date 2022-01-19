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
vector<vector<int>> findTriplets(int arr[], int n, int target)
{
   sort(arr,arr+n);

    vector<vector<int>> ans;
    bool found = false;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {

                if (arr[i]+arr[j]+arr[k] == target){
                     ans.push_back({arr[i],arr[j],arr[k]}); 
                }
            }
        }
    }

  sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int arr[] = {1,2,3,4},target=6;
    int n=10;
    vector<vector<int>>ans=findTriplets(arr,n,target);
     
    for(auto x:ans)
        cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    
     


    return 0;
}