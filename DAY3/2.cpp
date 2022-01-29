#include <bits/stdc++.h>
using namespace std;

void getCordinates(int *a){
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        cout<<a[i]<<",";
    }
}

int * whereIsKing(vector<vector<char>> board){
    static int kingCordinates[]={-1,-1};
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
          if(board[i][j]=='k'){
              kingCordinates[0]=i;
              kingCordinates[1]=j;
              break;
          }  
        }   
    }
    return kingCordinates;
}




int main(){

    bool flag=true;
    vector<vector<char>> board={
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','k','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','b','.'},
        {'.','.','.','.','.','.','.','.'} 
    };
    //  cout<<whereIsKing(board)[0];
    //  cout<<whereIsKing(board)[1];

    int row=whereIsKing(board)[0];
    //int dotCheck[]={-1,-1}
    //elephant queen
    int col=0;
    for(col=0;col<8;col++){
        if(board[row][col]=='e'||board[row][col]=='q'){
            flag=false;               
            break;         
            
        }
    }
    col=whereIsKing(board)[1];
    for(row=0;row<8;row++){
        if(board[row][col]=='e'||board[row][col]=='q'){
            flag=false;  
            break;         
             
        }
    }

    //rock
    row=whereIsKing(board)[0];
    col=whereIsKing(board)[1];
    
    if(row-2>=0 && row-2<8 && col-1<8 && col-1>=0){
        if(board[row-2][col-1]=='r'){
            flag=false;               
        }
    }

    if(row-2>=0 && row-2<8 && col+1<8 && col+1>=0){
        if(board[row-2][col+1]=='r'){
            flag=false;               
        }
    }

    if(row+2>=0 && row+2<8 && col-1<8 && col-1>=0){
        if(board[row+2][col-1]=='r'){
            flag=false;               
        }
    }

    if(row+2>=0 && row+2<8 && col+1<8 && col+1>=0){
        if(board[row+2][col+1]=='r'){
            flag=false;               
        }
    }

    //bishop queen
    row=whereIsKing(board)[0];
    col=whereIsKing(board)[1];

    while (row<8 && row>=0 && col<8 && col>=0){
        if(board[row][col]=='b' || board[row][col]=='q'){   
            flag=false;               
            break;         
        }
        row++;col++;
    }

    row=whereIsKing(board)[0];
    col=whereIsKing(board)[1];

    while (row<8 && row>=0 && col<8 && col>=0){
        if(board[row][col]=='b' || board[row][col]=='q'){   
            flag=false;               
            break;         
        }
        row--;col--;
    }

    row=whereIsKing(board)[0];
    col=whereIsKing(board)[1];

    while (row<8 && row>=0 && col<8 && col>=0){
        if(board[row][col]=='b' || board[row][col]=='q'){   
            flag=false;               
            break;         
        }
        row++;col--;
    }

    row=whereIsKing(board)[0];
    col=whereIsKing(board)[1];

    while (row<8 && row>=0 && col<8 && col>=0){
        if(board[row][col]=='b' || board[row][col]=='q'){   
            flag=false;               
            break;         
        }
        row++;col--;
    }

    if(flag==false)
        cout<<"king is not safe"<<endl;
    else
        cout<<"king is safe"<<endl;
    return 0;
}