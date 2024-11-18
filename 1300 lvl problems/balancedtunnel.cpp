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

    ll n;
    cin>>n;
    vector<ll> v1(n);
    vector<ll> v2(n);
    map<ll,ll> m1;
    for(int i=0;i<n;i++){
    	cin>>v1[i];
       
    }

    for(int i=0;i<n;i++){
        cin>>v2[i];
         m1[v2[i]]=i+1;
    }

    vector<ll> c(n);

    for(int i=0;i<n;i++){

        c[i]=m1[v1[i]];
    }

    //printVector(c);
    ll count=0;
    ll max_val=c[0];
    for(int i=1;i<n;i++){

        if(c[i]<max_val){
            count++;
        }

        max_val=max(max_val,c[i]);
    }

    cout<<count<<endl;

    return 0;
}