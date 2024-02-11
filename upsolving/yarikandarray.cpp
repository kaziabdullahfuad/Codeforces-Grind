//problem link:https://codeforces.com/contest/1899/problem/C
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
        vector<pair<ll,bool>> holder;
        vector<ll> adder(n);
        // if even bool=true
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
            bool is_even;
            if(v1[i]%2==0){
                is_even=true;
            }
            else{
                is_even=false;
            }
            holder.push_back({v1[i],is_even});
    	}

    	// for(auto x:holder){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
    	adder[0]=v1[0];

        for(int i=1;i<n;i++){

            //cout<<i<<endl;
            bool current=holder[i].second;

            if(adder[i-1]>=0 && current!=holder[i-1].second){
                adder[i]=adder[i-1]+v1[i];
            }
            else{
                adder[i]=v1[i];
            }
        }

        // for(auto x:adder){
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        // cout<<adder.size()<<endl;

        ll max_val=adder[0];

        for(int i=0;i<adder.size();i++){

            if(adder[i]>max_val){
                max_val=adder[i];
            }
        }
        cout<<max_val<<endl;

    	t--;
    }

    return 0;
}