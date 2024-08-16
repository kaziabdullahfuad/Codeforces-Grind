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

    int t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	set<ll> s1;
    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    		s1.insert(v2[i]);
    	}
    	
    	ll m;
    	cin>>m;

    	vector<ll> v3(m);
    	map<ll,ll> m1;
    	for(int i=0;i<m;i++){
    		cin>>v3[i];
    		m1[v3[i]]++;
    	}
    	bool found=true;

    	for(int i=0;i<n;i++){

    		if(v1[i]!=v2[i]){

    			ll holder=m1[v2[i]];

    			if(holder<=0){
    				found=false;
    				break;
    			}

    			m1[v2[i]]--;
    		}
    	}

    	if(found){
    		//cout<<"YES"<<endl;
    		ll last_val=v3[m-1];

    		if(s1.find(last_val)==s1.end()){

    			cout<<"NO"<<endl;
    		}
    		else{
    			cout<<"YES"<<endl;
    		}
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}