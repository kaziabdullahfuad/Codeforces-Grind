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

    ll n=300000;
    vector<ll> v1(n+1);

    v1[1]=0;

    for(ll i=1;i<=n;i++){

    	//cout<<v1[i]<<" ";
    	v1[i]=(v1[i-1]^(i-1));
    }

    

    while(t){

    	ll a,b;
    	cin>>a>>b;

    	// a=mex , b=xor of the whole array
    	// min mex will a. EX: if mex=4, we need at least 0,1,2,3
    	ll xor_value=v1[a];

    	//debug(xor_value);
    	
    	ll holder=(xor_value^b);
    	//debug(holder)

    	if(xor_value==b){
    		cout<<a<<endl;
    	}
    	else{

    		ll holder=(xor_value^b);
    		//debug(holder)

    		if(holder==a){
    			cout<<a+2<<endl;
    		}
    		else{
    			cout<<a+1<<endl;
    		}
    	}


    	t--;
    }

    return 0;
}