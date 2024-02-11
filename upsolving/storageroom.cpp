// problem link:https://codeforces.com/contest/1903/problem/B
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;
    	vector<vector<ll>> v1(n,vector<ll>(n,0));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<n;j++){

    			cin>>v1[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<n;j++){

    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }
        
        vector<ll> result;
        for(int i=0;i<n;i++){

            ll holder=1073741823;

            for(int j=0;j<n;j++){

                if(i==j){
                    continue;
                }
                else{
                    holder&=v1[i][j];
                }

            }
            //cout<<holder<<endl;
            result.push_back(holder);
        }

    	// for(auto x:result){
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        bool found=true;

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){


                if(i==j){
                    continue;
                }
                else if((result[i]|result[j])!=v1[i][j]){
                    found=false;
                    break;
                }
            }
            if(!found){
                break;
            }
        }
        
            if(found){

                cout<<"YES"<<endl;
                for(auto x:result){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        

    	t--;
    }

    return 0;
}