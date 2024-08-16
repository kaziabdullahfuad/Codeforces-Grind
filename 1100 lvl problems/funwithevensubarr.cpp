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
    	
    	// find max subarrayy
    	ll first=v1[0];
    	ll count=1;
    	ll max_val=1;
    	for(int i=0;i<n-1;i++){

    		if(v1[i]==v1[i+1]){
    			count++;
    		}
    		else{
    			max_val=max(count,max_val);
    			count=1;
    		}
    	}
    	max_val=max(max_val,count);
    	//debug(max_val)
    	if(max_val==n){
    		cout<<0<<endl;
    	}
    	else{
    		
    		ll last_val=v1[n-1];
    		ll count=0;
    		ll index=n-1;
    		for(int i=n-1;i>=0;i--){

    			if(v1[i]==last_val){
    				count++;
    			}
    			else{
    				index=i;
    				break;
    			}
    		}
    		//cout<<count<<endl;
    		//index++;
    		//debug(index)
    		ll ans=0;
    		//cout<<"START"<<endl;
    		while(index>=0){

    			ans++;
    			//cout<<"ANOTHER"<<endl;
    			//debug(index)
    			index-=count;
    			// debug(index)
    			// debug(count)
    			// debug(ans)
    			count*=2;
    			//debug(count)

    			while(index>=0 && v1[index]==last_val){
    				count++;
    				index--;
    			}
    		}
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}