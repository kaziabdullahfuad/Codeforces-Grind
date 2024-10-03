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

    	ll x,y,k;
    	cin>>x>>y>>k;

    	ll temp1=(x+k-1)/k;
    	ll temp2=(y+k-1)/k;
    	
    	//cout<<temp1<<" "<<temp2<<endl;
    	if(temp1>temp2){

    		ll ans=(temp1*2LL)-1;
    		cout<<ans<<endl;
    	}
    	else{

    		ll ans=(temp2*2LL);
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}