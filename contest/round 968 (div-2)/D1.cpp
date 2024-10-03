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

    	ll n,m;
    	cin>>n>>m;

    	ll max_val=0;

    	for(int i=0;i<n;i++){

    		ll len;
    		cin>>len;
    		set<ll> s1;
    		while(len){

    			ll val;
    			cin>>val;
    			
    			s1.insert(val);   
    			len--;
    		}

    		// ekhan theke
    		ll start=0;
    		ll first=0;
    		
    		while(true){

    			if(s1.find(start)==s1.end()){
    				// mane nai ata

    				if(first==0){
    					first=1;
    				}
    				else{
    					max_val=max(max_val,start);
    					break;
    				}
    			}
    			start++;
    		}
    		s1.clear();
    		//cout<<max_val<<endl;

    	}
    	ll sum=0;
    	
    	if(m<=max_val){

    		sum+=(m+1)*max_val;
    		cout<<sum<<endl;
    	}
    	else{

    		sum+=(max_val+1)*max_val;
    		//cout<<sum<<endl;
    		sum+=((m*(m+1))/2)-((max_val*(max_val+1))/2);

    		cout<<sum<<endl;
    	}


    	t--;
    }

    return 0;
}