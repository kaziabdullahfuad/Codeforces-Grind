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
    	vector<ll> v2(n+1);

    	ll ans=1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n+1;i++){
    		cin>>v2[i];
    	}

    	printVector(v1);
    	printVector(v2);

    	ll last=v2[n];
    	cout<<last<<endl;

    	ll min_dif=1e18;
    	for(int i=0;i<n;i++){

    		ll temp=abs(last-v1[i]);
    		//cout<<temp<<endl;
    		min_dif=min(min_dif,temp);
    	}

    	debug(min_dif)

    	ans+=min_dif;

    	debug(ans)

    	for(int i=0;i<n;i++){

    		ll temp=abs(v1[i]-v2[i]);
    		debug(temp)
    		ans+=abs(v1[i]-v2[i]);

    	}

    	cout<<ans<<endl;


    	t--;
    }

    return 0;
}