// problem link:https://codeforces.com/contest/1899/problem/D
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
            //m1[v1[i]]++;
        }


        // for(auto x:v1)cout<<x<<" ";
        // cout<<endl;

        ll ans=0;
         map<ll,ll> m1;

        for(int i=0;i<n;i++){

            //cout<<v1[i]<<" ";
            ans+=m1[v1[i]];
            //cout<<ans<<endl;
            if(v1[i]==1){
                ans+=m1[2];
            }
            else if(v1[i]==2){
                ans+=m1[1];
            }
            m1[v1[i]]++;
            //cout<<ans<<endl;
        }
        //cout<<"MAIN: "<<endl;
        cout<<ans<<endl;


        t--;
    }
   	

    return 0;
}