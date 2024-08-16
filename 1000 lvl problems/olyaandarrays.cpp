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

    	// no of arrays
    	ll n;
    	cin>>n;

    	// no of arrays theke jei array te max shobche
    	// shob gular second min nibo nd jeta shobche
    	// choto second min oita baad
    	ll ans=0;
    	ll ekdom_min=1e9;
    	ll lowest_second=1e9;
    	while(n){

    		ll m;
    		cin>>m;
    		vector<ll> v1(m);
    		
    		for(int i=0;i<m;i++){
    			cin>>v1[i];
    		}

    		sort(all(v1));
    		//printVector(v1);
    		ll second_max=v1[1];
    		//debug(second_max)
    		ans+=second_max;
    		//debug(ans)
    		ekdom_min=min(ekdom_min,v1[0]);

    		if(second_max<lowest_second){

    			lowest_second=second_max;
    		}

    		n--;
    	}

    	ans+=ekdom_min;
    	ans-=lowest_second;

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}