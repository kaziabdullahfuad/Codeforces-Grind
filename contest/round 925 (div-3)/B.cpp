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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	ll max_val=-1e18;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		max_val=max(max_val,v1[i]);
    	}
    	
    	if(n==1){
    		cout<<"YES"<<endl;
    	}
    	else{

    		ll last=v1[n-1];

    		bool found=true;
    		bool max_found=false;
    		if(v1[0]<last ){
    			found=false;
    		}
    		ll hold=n-1;
    		cout<<hold<<endl;
    		ll val=last;
    		while(hold>=0 && val==last){

    			cout<<val<<endl;
    			if(v1[hold]==max_val){
    				max_found=true;
    				break;
    			}
    			hold--;
    			val=v1[hold];
    			if(val==max_val){
    				max_found=true;
    				break;
    			}
    		}
    		cout<<max_found<<endl;

    		if(found==false || max_found){
    			cout<<"NO"<<endl;
    		}
    		else{
    			cout<<"YES"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}