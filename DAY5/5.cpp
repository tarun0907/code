#include <iostream>
using namespace std; 
#define N 3

/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
*/


void rotate(int A[][N])
{
    
    for (int i = 0; i < N; i++)
        for (int j = i+1; j < N; j++)
            swap(A[i][j], A[j][i]);
    
    
    for(int i=0;i<N;i++)
    {
        int x=0,y=N-1;
        while(x<=y)
            swap(A[i][x++],A[i][y--]);
    }
}



int main()
{


    int a[N][N]={{1,2,3},{4,5,6},{7,8,9}};
    //int a[N][N]={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotate(a);

         

    for (int i = 0; i < N; i++){
        for (int j =0; j < N; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}