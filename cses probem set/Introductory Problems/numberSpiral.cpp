#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin>>t;

    while(t){
        
        long long int row,col;
        cin>>row>>col;
        long long int diag=1;
        long long int inc=0;
        long long int max_num=max(row,col);
        long long int min_num=min(row,col);
        long long int diff=max_num-min_num;
        // cout<<max_num<<endl;
        // cout<<min_num<<endl;
        // cout<<diff<<endl;
        for(long long int i=1;i<=max_num;i++){
            diag+=inc;
            inc+=2;
        }
        //cout<<diag<<endl;
        if(row==col){
            cout<<diag<<endl;
        }
        else if(row==min_num){ // up movement

            // if max_num is even then up - else +
            if(max_num%2==0){
                cout<<diag-diff<<endl;
            }
            else{
                cout<<diag+diff<<endl;
            }
        }
        else if(col==min_num){ // left movement

            // if max_num is even then left + else -
            if(max_num%2==0){
                cout<<diag+diff<<endl;
            }
            else{
                cout<<diag-diff<<endl;
            }
        }

        t--;
    }

    



    return 0;
}