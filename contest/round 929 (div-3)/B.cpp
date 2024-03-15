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
    	ll sum=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    	}

    	if(sum%3==0){

    		cout<<0<<endl;
    	}
    	else if(sum%3==2){

    		cout<<1<<endl;
    	}
    	else{

    		sort(all(v1));
    		bool direct=false;
    		bool indirect=false;
    		if(n==1){
    			
    			cout<<1<<endl;
    		}
    		else{

    			ll count=0;
    			//debug(sum);
    			ll holder=0;
    			for(int i=0;i<n;i++){

    				holder=sum-v1[i];
    				//cout<<holder<<endl;
    				if(holder%3==0){
    					direct=true;
    					break;
    					count=1;
    				}
    				else if(holder%3==2){
    					indirect=true;
    					//break;
    				}
    			}
    			//cout<<sum<<endl;
    			//cout<<count<<endl;

    			if(direct){
    				cout<<1<<endl;
    			}
    			else if(indirect){
    				cout<<2<<endl;
    			}
    		}
    	}
    	

    	t--;
    }

    return 0;
}