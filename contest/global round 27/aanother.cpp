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

    	ll n,m,r,c;
    	cin>>n>>m>>r>>c;

    	if(r==n){

    		cout<<m-c<<endl;
    	}
    	else{


    		ll hold=n-r;

    		ll ans=0;

    		ans+=(m-c)+(hold)*(m)+(hold)*(m-1);
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}