#include<iostream>
#include<numeric>
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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

    for(int i=0;i<v1.size();i++){

        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

        ll n,m;
        cin>>n>>m;;
        vector<ll> v1(n);
        
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }

        vector<ll> v2(m);
        
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        
        // printVector(v1);
        // printVector(v2);

        // //sort(all(v2));

        // printVector(v2);
        ll left=0;
        vector<pair<ll,ll>> v3;
        for(int i=0;i<n;i++){

            v3.push_back({v1[i],v2[v1[i]-1]});

        }

        ll len=v3.size();

        // cout<<"HERE"<<endl;
        // for(int i=0;i<len;i++){

        //     cout<<v3[i].first<<" "<<v3[i].second<<endl;
        // }


        sort(all(v3),greater<pair<ll,ll>>());

        // cout<<"HERE"<<endl;
        // for(int i=0;i<len;i++){

        //     cout<<v3[i].first<<" "<<v3[i].second<<endl;
        // }

        ll sum=0;
        for(int i=0;i<len;i++){

            ll hold=v3[i].second;
            ll val=v2[left];
            //cout<<v3[i].first<<" "<<v3[i].second<<endl;
            //cout<<hold<<" "<<val<<endl;
            if(hold<=val){
                sum+=hold;
            }
            else{

                sum+=val;
                left++;
            }
           // debug(sum)
        }

        cout<<sum<<endl;

        t--;
    }

    return 0;
}