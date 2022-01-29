#include <iostream>
using namespace std; 

/*
1. Write a method void printArray(int[][]arr)
Prints array elements clock wise and anti-clockwise alternatively.
Input : 
 1 2 3
 4 5 6
 7 8 9
Output :
1 2 3 6 9 8 7 4 5
3 2 1 4 7 8 9 6 5
*/
  
void clockprintArray(int row, int column, int a[3][3]) 
{ 
    int i, k = 0, l = 0;
  

    while (k < row && l < column) 
    { 
        for (i = l; i < column; ++i) 
        { 
            cout<<a[k][i]<<" ";
        } 
        k++; 
  
        for (i = k; i < row; ++i) 
        { 
            cout<<a[i][column-1]<<" "; 
        } 
        column--; 
  
        if ( k < row) 
        { 
            for (i = column-1; i >= l; --i) 
            { 
                cout<<a[row-1][i]<<" "; 
            } 
            row--; 
        } 
  
        if (l < column) 
        { 
            for (i = row-1; i >= k; --i) 
            { 

                cout<<a[i][l]<<" "; 
            } 
            l++;     
        }  
               
    }
    cout<<endl; 
} 

void antiClockprintArray(int row, int column, int a[3][3]) 
{ 
    int i, k = 0, l = 0; 
  

    while (k < row && l < column) 
    { 
        for (i = l; i < column; ++i) 
        { 
            cout<<a[i][k]<<" "; 
        } 
        k++; 
  
        for (i = k; i < row; ++i) 
        { 
            cout<<a[column-1][i]<<" "; 
        } 
        column--; 
  
        if ( k < row) 
        { 
            for (i = column-1; i >= l; --i) 
            { 
                cout<<a[i][row-1]<<" "; 
            } 
            row--; 
        } 
  
        if (l < column) 
        { 
            for (i = row-1; i >= k; --i) 
            { 
                cout<<a[l][i]<<" "; 
            } 
            l++;     
        }         
    }
    cout<<endl;  
} 
  
int main() 
{ 
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    clockprintArray(3, 3, a); 
    antiClockprintArray(3, 3, a); 
    return 0; 
} 