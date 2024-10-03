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
    	
    	if(n==1 || n==2){

    		cout<<0<<endl;
    	}
    	else{

    		vector<ll> v2=v1;
    		//printVector(v1);
    		ll max_val=-1;
    		ll count=0;
    		for(int i=0;i<n;i++){

    			ll cur_ele=v1[i];
    			count=0;
    			count++;

    			for(int j=0;j<n;j+=2){

    				//debug(i)
    				//debug(j)
    				if(i==0){

    					//cout<<"I to 0"<<endl;
    					if(j==0 || j==1){

    						continue;
    					}
    					else{

    						count++;
    						cur_ele=max(cur_ele,v1[i]);
    					}
    				}
    				else if(i==n-1){

    					if(j==n-1 || j==n-1-1){
    						continue;
    					}
    					else{

    						count++;
    						cur_ele=max(cur_ele,v1[i]);
    					}

    				}
    				else{
    					// 2 ta count
    					ll left=i-1;
    					ll right=i+1;

    					if(j==i || j==left || j==right){
    						continue;
    					}
    					else{
    						count++;
    						cur_ele=max(cur_ele,v1[i]);
    					}
    				}
    			}
    			//debug(cur_ele)
    			//debug(count)
    			max_val=max(max_val,(count+cur_ele));
    		}

    		cout<<max_val<<endl;
    	}

    	t--;
    }

    return 0;
}