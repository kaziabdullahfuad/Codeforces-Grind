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

    	ll n,phn_chr,chr_con,on_off;
    	cin>>n>>phn_chr>>chr_con>>on_off;
    	vector<ll> v1(n);

    	for(ll i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);
    	ll min_val=1e18;
    	ll holder=0;
    	//ll start=1;
    	bool found=false;
    	for(ll i=0;i<n;i++){

    		ll consume=(v1[i]-holder)*chr_con;
    		//cout<<consume<<endl;
    		//cout<<on_off<<endl;
    		min_val=min(consume,on_off);
    		//cout<<min_val<<endl;
    		phn_chr-=min_val;
    		//cout<<phn_chr<<endl;
    		if(phn_chr<=0){
    			found=true;
    			break;
    		}
    		holder=v1[i];

    	}

    	if(found==false){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}