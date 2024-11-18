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

    	// n=rows , m=columns
    	// (r,c) is the position where the person who left is initially at.
    	ll n,m,r,c;
    	cin>>n>>m>>r>>c;

    	if(r==n){

    		// mane last row tei ase tahole just c ar bam
    		// pashe shob gula ashbe 

    		ll ans=(m-c)*1ll;
    		cout<<ans<<endl;
    	}
    	else{

    		// last row te nai upor niche hobe
    		// first prothom col gula
    		ll ans=0;

    		// column gula
    		ans+=(m-c)+(n-r)*(m-1);
    		//cout<<(m-c)<<endl;
    		//cout<<ans<<endl;

    		ll mul=1ll+(m-1);
    		//debug(mul)

    		ans+=(n-r)*mul;

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}