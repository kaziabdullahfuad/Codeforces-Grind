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

    	ll n,r;
    	cin>>n>>r;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll total_seats=(r*2);

    	// prothome try to make sure 2 jon ekshathe boshe
    	// and remainder koita thake
    	ll count=0;
    	ll remain=0;
    	for(int i=0;i<n;i++){

    		ll temp=v1[i]/2;
    		count+=(temp*2);
    		r-=temp;
    		remain+=(v1[i]%2);
    	}

    	//cout<<count<<" "<<r<<endl;
    	//debug(remain)
    	//debug(r)

    	if(r>=remain){

    		count+=remain;
    		cout<<count<<endl;
    	}
    	else{

    		
    		//debug(remain)
    		//debug(r)

    		while(remain>=2){

    			remain-=2;
    			r--;
    			//debug(remain)
    			//debug(r)
    			if(r>=remain){

    				count+=remain;
    				break;
    			}
    		}

    		//debug(remain)
    		cout<<count<<endl;
    	}

    	t--;
    }

    return 0;
}