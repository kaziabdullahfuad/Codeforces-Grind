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

    	ll n,s,m;
    	cin>>n>>s>>m;

    	ll first=0;
    	ll second=0;
    	ll count=0;
    	bool found=false;
    	// cout<<"HERE S VAL: "<<s<<endl;
    	cout<<"HERE S VAL: ";
    	cout<<n<<" "<<s<<" "<<m<<endl;
    	while(n){

    		ll l,r;
    		cin>>l>>r;
    		cout<<l<<" "<<r<<endl;
    		if(count==0){

    			if(l-0>=s){
    				//debug(l-0)
    				found=true;
    				break;
    			}
    		}
    		else{

    			if(l-second>=s){
    				cout<<l<<" "<<second<<endl;
    				debug(l-second)
    				found=true;
    				break;
    			}
    		}

    		count++;
    		first=l;
    		second=r;

    		n--;
    		//cout<<n<<endl;
    		if(n==0){
    			//debug(m-second)
    			if(m-second>=s){
    				found=true;
    				break;
    			}
    		}
    	}

    	cout<<second<<endl;

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}