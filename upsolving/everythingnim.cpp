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
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	sort(all(v1));

    	if(n==1){
    		cout<<"Alice"<<endl;
    	}
    	else if(n==2){

    		if(v1[0]==1){
    			cout<<"Bob"<<endl;
    		}
    		else{
    			cout<<"Alice"<<endl;
    		}
    	}
    	else{

    		if(v1[0]==1){

    			ll start=0;
    			bool found=true;
    			ll index=0;
    			ll counter=1;
    			//cout<<m1[v1[n-1]]<<endl;
    			ll dorkar=n-m1[v1[n-1]];
    			//cout<<dorkar<<endl;
    			ll game=0;
    			for(auto x:m1){

    				if(x.first!=counter){
    					//cout<<"HERE"<<endl;
    					//cout<<counter<<" "<<x.first<<endl;
    					start++;
    					//cout<<start<<endl;
    					found=false;
    					break;
    				}
    				start++;
    				index+=x.second;
    				
    				counter++;
    				//game++;
    			}
    			//cout<<start<<endl;
    			if(start%2==0){
    				cout<<"Bob"<<endl;
    			}
    			else{
    				cout<<"Alice"<<endl;
    			}
    			
    		}
    		else{
    			cout<<"Alice"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}