// problem link:https://codeforces.com/contest/1901/problem/C
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
    	vector<ll> v1(n);

    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
        ll operations=0;
        sort(v1.begin(),v1.end());

        ll min_val=v1[0];
        ll max_val=v1[n-1];
        vector<ll> holder;
        while(min_val!=max_val){

            if(min_val%2==0){

                holder.push_back(0);
                min_val=(min_val+0)/2;
                max_val=(max_val+0)/2;
            }
            else{

                holder.push_back(1);
                min_val=(min_val+1)/2;
                max_val=(max_val+1)/2;
            }
            operations++;
        }

        if(operations<=n){

            if(operations==0){
                cout<<operations<<endl;
            }
            else{
            cout<<operations<<endl;
            for(auto x:holder)cout<<x<<" ";
            cout<<endl;
            }
        }
        else{
            cout<<operations<<endl;
        }
    	
    	t--;
    }

    return 0;
}