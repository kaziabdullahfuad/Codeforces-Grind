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
#define debug(x) cout<<#x<<" "<<x<<endl;
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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	if(n==1){

    		if(v1[0]>=m){
    			cout<<1<<endl;
    		}
    		else{
    			cout<<0<<endl;
    		}
    	}
    	else{

    		ll holder=n;

    		ll temp=v1[0];
    		//debug(temp);

    		for(int i=1;i<n;i++){

    			// debug(temp);
    			// debug(v1[i]);
    			// debug(holder);

    			if(temp<m || v1[i]<m){

    				temp+=v1[i];
    				holder--;
    			}
    			else{
    				temp=v1[i];
    			}

    		}
    		//cout<<holder<<endl;
    		//cout<<temp<<endl;
    		if(temp<m){
    			holder--;
    		}
    		cout<<holder<<endl;
    	}
    	

    	t--;
    }

    return 0;
}