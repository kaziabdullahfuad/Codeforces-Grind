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

    	ll n,f,k;
    	// f=fav index, k= no of removed
    	cin>>n>>f>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll fav=v1[f-1];

    	sort(all(v1),greater<ll>());

    	bool paise=false;
    	bool baad_dibo=false;
    	for(int i=0;i<n;i++){

    		if(v1[i]==fav){

    			if((i+1)<=k){
    				paise=true;
    				break;
    			}
    		}
    	}

    	for(int i=n-1;i>=0;i--){

    		if(v1[i]==fav){

    			if((i+1)>k){
    				baad_dibo=true;
    				break;
    			}
    		}
    	}

    	if(paise==false){
    		cout<<"NO"<<endl;
    	}
    	else if(paise==true && baad_dibo==true){
    		cout<<"MAYBE"<<endl;
    	}
    	else if(paise==true && baad_dibo==false){
    		cout<<"YES"<<endl;
    	}

    	t--;
    }

    return 0;
}