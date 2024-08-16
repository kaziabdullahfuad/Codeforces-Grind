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

    	// n=no of kids
    	// m= initial no of cookies
    	ll n,m;
    	cin>>n>>m;

    	if(m%n==0){
    		cout<<0<<endl;
    	}
    	else if(n>m){

    		ll ans=n-m;
    		cout<<ans<<endl;
    	}
    	else{

    		ll hold=m/n;
    		//cout<<n<<" "<<m<<endl;
    		ll min_val=m-(hold*n);
    		//cout<<min_val<<endl;
    		hold++;

    		min_val=min(min_val,(hold*n)-m);

    		cout<<min_val<<endl;
    	}

    	t--;
    }

    return 0;
}