#include <bits/stdc++.h>
using namespace std ; 
int ans = 0 ;
int arr[14] = {0};
int n ;
int board[14][14] = {0} ;
int dx[] = {1,2,2,1,-1,-2,-2,-1};
int dy[] = {2,1,-1,-2,-2,-1,1,2};

bool check2(int i,int j){
    if(board[i][j]==1)return 0;
    for(int pos=0;pos<8;pos++){
        int nx = i+dx[pos];
        int ny = j+dy[pos];
        // (nx,ny) -> are the cells getting attacked
        if(nx<n&&nx>=0 && ny<n&&ny>=0 && board[nx][ny]==1)return 0;
    }
    return 1;
}
bool check1 (int row , int col ){
    for (int prow = 0 ; prow <row ; prow++){
       int  pcol = arr[prow] ;
        
        if (pcol == col || abs (prow-row) == abs (pcol-col)) return 0 ;
    }
    return 1 ;
}




void rec(int level , int Squeen){
    // base case 
    if (level == n*n){
        if (Squeen == 0){
            ans++ ;
        }
    }
    
    //not placed 
    rec (level+1 , Squeen);
    int row = level/n;
    int col = level %n;
    
    //placed 
    if (Squeen >0  && check1(row , col)&& check2(row ,col)){
        board[row][col] = 1;
        rec(level+1 , Squeen -1 ) ;
        board[row][col] = 0 ;
    }
    return ;
}
int main (){
    cin >> n ; 
    int Squeen = n ;
    
    rec(0 , Squeen);
    cout << ans;
    return 0;
}