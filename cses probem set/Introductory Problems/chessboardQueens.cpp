#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
void printVector(vector<string> v1){

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
    
}
void printboolvector(vector<bool> v1){

    for(auto x:v1){
        cout<<x<<" ";
    }

    cout<<endl;
}
void print2dvector(vector<vector<char>> result){

    for(auto row:result){

        for(auto col: row){

            cout<<col<<endl;
        }
    }
}
void solve(vector<string> chessBoard,vector<bool>col,int row,vector<bool>leftdiag,vector<bool>rightdiag,int &total){

    if(row==8){

        total++;
        return;
    }

    for(int column=0;column<chessBoard.size();column++){
        int leftdiag_holder=row+column;
        int rightdiag_holder=row-column+7;
        if(chessBoard[row][column]=='.' && col[column]==0 && leftdiag[leftdiag_holder]==0 && rightdiag[rightdiag_holder]==0){
            col[column]=1;
            leftdiag[leftdiag_holder]=1;
            rightdiag[rightdiag_holder]=1;

            solve(chessBoard,col,row+1,leftdiag,rightdiag,total);

            col[column]=0;
            leftdiag[leftdiag_holder]=0;
            rightdiag[rightdiag_holder]=0;
        }
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int N=8;
    vector<string> chessBoard(N);

    for(int i=0;i<N;i++){

        cin>>chessBoard[i];
        
    }
    //printVector(chessBoard);
    // row boolean
    vector<bool> col(N,false);
    // for left diagonal
    vector<bool> leftdiag(2*(N-1),false);
    // for right diagonal
    vector<bool> rightdiag(2*(N-1),false);
    int total=0;
    int row=0;
    

    solve(chessBoard,col,row,leftdiag,rightdiag,total);

    cout<<total<<endl;
    
    return 0;
}