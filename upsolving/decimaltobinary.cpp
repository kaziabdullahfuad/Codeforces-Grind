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

    int val;
    cin>>val;
    ll holder=1;
    ll sum=0;
    ll start=1;
    ll ano_sum=0;
    ll fart=1;
    while(val){

    	ll temp=val%2;
    	cout<<temp<<endl;
    	sum+=(temp*start);
    	ano_sum+=(temp*fart);
    	//cout<<sum<<endl;
    	start*=2;
    	fart*=10;
    	val/=2;
    }
    cout<<val<<" "<<sum<<endl;
    cout<<ano_sum<<endl;

    return 0;
}