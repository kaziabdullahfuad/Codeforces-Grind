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
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	
    	if(n==2){

    		ll val=max(v1[0],v1[1]);

    		cout<<val<<endl;
    	}
    	else if(n%2==0){

    		ll rem=(n/2)-1;

    		sort(all(v1),greater<ll>());

    		//cout<<rem<<endl;

    		//printVector(v1);

    		if(m1.size()==1){

    			cout<<v1[0]<<endl;
    		}
    		else{

    			ll ans=0;
    			for(int i=0;i<n;i++){

    				int j=i;
    				//cout<<v1[i]<<endl;
    				if(m1[v1[i]]>rem){
    					ans=v1[i];
    					break;
    				}
    				else{

    					rem-=m1[v1[i]];
    				}

    				while(v1[j]==v1[i]){
    					j++;
    				}

    				i=j-1;
    			}
    			cout<<ans<<endl;


    		}

    	}
    	else{

    		ll rem=n/2;

    		sort(all(v1),greater<ll>());

    		//cout<<rem<<endl;

    		//printVector(v1);

    		if(m1.size()==1){

    			cout<<v1[0]<<endl;
    		}
    		else{

    			ll ans=0;
    			for(int i=0;i<n;i++){

    				int j=i;
    				//cout<<v1[i]<<endl;
    				if(m1[v1[i]]>rem){
    					ans=v1[i];
    					break;
    				}
    				else{

    					rem-=m1[v1[i]];
    				}

    				while(v1[j]==v1[i]){
    					j++;
    				}

    				i=j-1;
    			}
    			cout<<ans<<endl;


    		}

    	}

    	t--;
    }

    return 0;
}