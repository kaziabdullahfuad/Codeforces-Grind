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
    	cin>>n>>m;

    	string s;
    	cin>>s;
    	map<ll,ll> m1;
    	//vector<ll> v1(m);

    	for(int i=0;i<m;i++){

    		ll val;
    		cin>>val;

    		m1[val]++;
    	}

    	// for(auto x:m1){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	string c;
    	cin>>c;
    	//cout<<c<<endl;

    	sort(all(c));

    	//cout<<c<<endl;

    	ll left=0,right=m-1;

    	for(auto x:m1){
    		
    		ll hold=x.second;
    		ll temp=x.second-1;

    		s[x.first-1]=c[left];
    		left++;
    		right-=temp;
    	}

    	cout<<s<<endl;

    	t--;
    }

    return 0;
}