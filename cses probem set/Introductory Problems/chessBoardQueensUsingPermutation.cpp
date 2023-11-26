#include<iostream>
#include<algorithm>
#include<numeric>
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
void print2dvector(vector<vector<char>> result){

    for(auto row:result){

        for(auto col: row){

            cout<<col<<endl;
        }
    }
}
int main()
{
	vector<string> chessBoard(8);
    for (int i = 0; i < 8;i++)
        cin >> chessBoard[i];
    int count = 0;
    vector<int> columns(8);
    iota(columns.begin(), columns.end(),0);
    do{
        bool valid = true;
        for(int i = 0; i < 8; i++)
        {
            if (chessBoard[i][columns[i]] != '.')
            {
                valid = false;
                break;
            }       
        }
        vector <bool> diagonalOccupied(15,false);
        for(int i = 0; i < 8; i++)
        {
            if (diagonalOccupied[i+columns[i]])
                valid = false;
            diagonalOccupied[i+columns[i]] = true;
        }
        for(int i = 0; i < 15; i++)
            diagonalOccupied[i] = false;
        for(int i = 0; i < 8; i++)
        {
            if (diagonalOccupied[i+7-columns[i]])
                valid = false;
            diagonalOccupied[i+7-columns[i]] = true;
        }
        count += valid;
    }while (next_permutation(columns.begin(),columns.end()));
    cout << count;

}