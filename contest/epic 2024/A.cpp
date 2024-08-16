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

    	ll n,m,k;
    	cin>>n>>m>>k;

    	if(k>=n && k>=m){

    		cout<<n*m<<endl;
    	}
    	else if(k>n){

    		// k is either k==m or k<m
    		ll row=min(m,k);
    		cout<<row*n<<endl;
    	}
    	else{

    		ll row=min(m,k);

    		ll ans=0;
    		ll each_row=row*(n-k);
    		//debug(each_row);

    		ll rest=row*(2*k-n);
    		//debug(rest)

    		ans=each_row+rest;

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}