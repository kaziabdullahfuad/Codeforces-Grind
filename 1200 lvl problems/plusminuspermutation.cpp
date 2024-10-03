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

    	ll n,x,y;
    	cin>>n>>x>>y;

    	if(x==y){

    		// duitai eki divisor
    		// so duitai eki jinish katbe
    		// so (x1+x2+x3)-(x1+x2+x3) =0
    		cout<<0<<endl;
    	}
    	else{

    		//cout<<__gcd(20,50);
    		ll gcd_val=__gcd(x,y);

    		ll lcm=(x*y)/gcd_val;

    		// koita common lcm arki
    		ll koita_lcm=n/lcm;

    		ll x_val=(n/x)-koita_lcm;
    		//debug(x_val)

    		ll baad_jabe=n-x_val;
    		//debug(baad_jabe)

    		ll total_x=((n*(n+1))/2)-(baad_jabe*(baad_jabe+1))/2;
    		//debug(total_x)

    		ll y_val=(n/y)-koita_lcm;
    		//debug(y_val)

    		ll total_y=(y_val*(y_val+1))/2;
    		//debug(total_y)


    		ll ans=total_x-total_y;
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}