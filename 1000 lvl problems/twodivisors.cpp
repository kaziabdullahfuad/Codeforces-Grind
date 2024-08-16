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

    	ll a,b;
    	cin>>a>>b;

    	if(b%a!=0){

    		ll gcd_val=__gcd(a,b);
    		//cout<<a<<" "<<b<<endl;

    		cout<<(a*b)/gcd_val<<endl;
    	}
    	else{

    		//b%a=0 so b=x/p1 so x=b*p1
    		// and p1 is b/a because x/p1 *p1*p1/x =p1
    		// so x = b*b/a

    		ll p1=b/a;

    		ll x=b*p1;

    		cout<<x<<endl;
    	}

    	t--;
    }

    return 0;
}