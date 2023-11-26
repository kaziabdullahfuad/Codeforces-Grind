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

        long long int max_num=max(row,col);
        long long int min_num=min(row,col);
        long long int max_num_squared=max_num*max_num;

        if(max_num%2==0){// starts from left

            if(max_num==min_num){ // diagonal part
                cout<<max_num_squared-(max_num-1);
            }
            else if(min_num==row){ // change in height so left to diag and then top

                cout<<(max_num_squared-(max_num-1))-(min_num-1);
            }
            else if(min_num==col){ // change in col so left to right

                cout<<max_num_squared-(min_num-1)<<endl;
            }

        }
        else{// starts from top

            if(max_num==min_num){ // diagonal part
                cout<<max_num_squared-(max_num-1)<<endl;
            }
            else if(min_num==row){ // change in height so top to down 

                cout<<max_num_squared-(min_num-1)<<endl;
            }
            else if(min_num==col){ // change in col so top to diag and then left

                cout<<(max_num_squared-(max_num-1))-(min_num-1)<<endl;
            }
        }
        t--;
    }

    return 0;
}