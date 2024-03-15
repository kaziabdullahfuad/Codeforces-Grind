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
    	ll sum=0;
    	ll mul=1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    		mul*=v1[i];
    	}

    	cout<<sum<<" "<<mul<<endl;

    	vector<ll> prefix(n+1);
    	prefix[0]=1;

    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]*v1[i-1];
    	}
    	bool found=false;
    	ll k=0;
    	for(int i=1;i<=n;i++){
    		cout<<prefix[i]<<" ";
    	}
    	cout<<endl;
    	
    	for(int i=1;i<=n-1;i++){

    		debug(prefix[i]);
    		cout<<mul/prefix[i]<<endl;
    		if((mul/prefix[i])==prefix[i]){
    			found=true;
    			k=i;
    			break;
    		}
    	}

    	if(found){
    		cout<<k<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}