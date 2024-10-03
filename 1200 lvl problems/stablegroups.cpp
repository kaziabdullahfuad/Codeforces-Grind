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

    
    	ll n,k,x;
    	cin>>n>>k>>x;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll ans=0;

    	//cout<<n<<" "<<k<<" "<<x<<endl;

    	sort(all(v1));

    	//printVector(v1);
    	vector<ll> divisor;
    	ll groups=0;
    	for(int i=0;i<n-1;i++){

    		if(v1[i+1]-v1[i]>x){
    			
    			groups++;
    			ll divider=(v1[i+1]-v1[i]-1)/x;
    			divisor.push_back(divider);
    		}
    		//cout<<v1[i]<<" "<<ans<<endl;
    	}

    	groups++;
    	//cout<<groups<<endl;

    	sort(all(divisor));
    	//printVector(divisor);
    	ll cut=0;
    	for(int i=0;i<divisor.size();i++){

    		if(divisor[i]<=k){

    			cut++;
    			k-=divisor[i];
    		}
    		else{
    			break;
    		}
    	}

    	//cout<<cut<<endl;

    	cout<<groups-cut<<endl;
    

    return 0;
}