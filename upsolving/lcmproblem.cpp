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

    	ll l,r;
    	cin>>l>>r;

    	ll the_gcd=__gcd(l,r);
    	//debug(the_gcd)
    	ll the_lcm=(l*r)/(the_gcd);

    	//cout<<the_lcm<<endl;
    	bool found=false;
    	ll temp=0;
    	ll x,y;
    	for(ll i=l;i<r;i++){

    		ll holder=(i*2);

    		if(holder<=r){

    			 temp=(i*holder)/(__gcd(i,holder));

    			if(temp>=l && temp<=r){
    				x=i,y=holder;
    				found=true;
    				break;
    			}
    		}
    		else{
    			break;
    		}

    	}

    	if(found){
    		//cout<<temp<<endl;
    		cout<<x<<" "<<y<<endl;
    	}
    	else{
    		cout<<-1<<" "<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}