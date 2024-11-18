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
void solve(){
    ll n,w;
    cin>>n>>w;
    multiset<ll>ms;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ms.insert(x);
    }
    int h=1,left=w;

    for(auto x:ms){
    	cout<<x<<" ";
    }
    cout<<endl;
    debug(left)
    while(!ms.empty()){
        auto itr = ms.upper_bound(left);
        if(itr==ms.begin()){
            left=w;
            h++;
        }
        else{
            itr--;
            int val = *itr;
            left-=val;
            ms.erase(itr);
        }
    }
    cout<<h<<"\n";
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            //cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}