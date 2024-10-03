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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(n==1){
    		
    		cout<<v1[0]+1<<endl;
    	}
    	else if(n==2){

    		ll max_val=max(v1[0],v1[1]);
    		cout<<max_val+1<<endl;
    	}
    	else{

    		ll max_val=-1;
    		for(int i=0;i<2;i++){

    			ll cur_ele=-1;
    			ll count=0;
    			for(int j=i;j<n;j+=2){

    				cur_ele=max(cur_ele,v1[j]);
    				count++;
    			}

    			max_val=max(max_val,count+cur_ele);
    		}

    		cout<<max_val<<endl;
    	}
    	

    	t--;
    }

    return 0;
}