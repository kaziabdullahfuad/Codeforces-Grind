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
        long long int range=(max_num-1)*(max_num-1)+1;
        //cout<<range<<endl;

        if(max_num%2==0){// starts from left

            if(min_num==row){ // height decrease so top to down but plus

                cout<<range+(min_num-1)<<endl;
            }
            else{// left to right col -> but negative

                cout<<max_num_squared-(min_num-1)<<endl;
            }
            

        }
        else{// starts from top

            if(min_num==row){ // goes downwards so -

                cout<<max_num_squared-(min_num-1)<<endl;
            }
            else{
                cout<<range+(min_num-1)<<endl;
            }
        }
        t--;
    }

    return 0;
}