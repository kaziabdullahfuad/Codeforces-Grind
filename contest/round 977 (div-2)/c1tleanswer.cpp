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

    	ll n,m,q;
    	cin>>n>>m>>q;

    	vector<ll> v1(n);
    	vector<ll> v2(m);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    	}

    	vector<ll> d(n+1);

    	for(int i=0;i<n;i++){

    		d[v1[i]]=i;
    	}

    	//printVector(d);

    	ll cnt=0;
    	map<ll,ll> m1;
    	bool found=true;
    	for(int i=0;i<m;i++){

    		ll hold=d[v2[i]];

    		if(m1.find(v2[i])!=m1.end()){
    			continue;
    		}

    		if(cnt==hold){

    			cnt++;
    			m1[v2[i]]++;
    		}
    		else{
    			found=false;
    			break;
    		}
    	}

    	if(found){
    		cout<<"YA"<<endl;
    	}
    	else{
    		cout<<"TIDAK"<<endl;
    	}

    	t--;
    }

    return 0;
}