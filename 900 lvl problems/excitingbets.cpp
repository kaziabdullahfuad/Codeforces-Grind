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

    	ll a,b;
    	cin>>a>>b;

    	ll max_val=-1e18;
    	ll min_val=1e18;

    	if(a==b){
    		cout<<0<<" "<<0<<endl;
    	}
    	else if((a==1 && b==2) || (a==2 && b==1)){
    		cout<<1<<" "<<0<<endl;
    	}
    	else{

    		min_val=min(a,b);
    		max_val=max(a,b);

    		// gcd
    		ll gcd=max_val-min_val;

    		//cout<<gcd<<endl;

    		ll holder=max_val%gcd;

    		ll steps=min(holder,gcd-holder);

    		cout<<gcd<<" "<<steps<<endl;
    		
    	}

    	t--;
    }

    return 0;
}