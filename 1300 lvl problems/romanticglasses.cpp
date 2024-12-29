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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);

    	for(int i=2;i<=n;i+=2){

    		v1[i]=-v1[i];
    	}

    	//printVector(v1);

    	map<ll,ll> m1;
    	m1[0]=1;

    	vector<ll> prefix(n+1);

    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i];
    	}

    	//printVector(prefix);
    	bool found=false;
    	for(int i=1;i<=n;i++){

    		if(m1[prefix[i]]>=1){
    			//debug(i)
    			//debug(prefix[i])
    			found=true;
    			break;
    		}

    		m1[prefix[i]]++;
    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}