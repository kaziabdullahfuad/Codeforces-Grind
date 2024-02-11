// problem link:https://codeforces.com/contest/1903/problem/C
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
    	
    	vector<ll> holder(n);

    	ll sum=0; 

    	for(int i=0;i<n;i++){
    		sum+=v1[i];
    	}

    	holder[0]=sum;
    	//cout<<sum<<endl;
    	for(int i=1;i<n;i++){

    		ll temp=v1[i-1];
    		
    		//cout<<temp<<endl;
    		if(temp>=0){

    			holder[i]=holder[i-1]-temp;

    		}
    		else{
    			holder[i]=holder[i-1]+abs(temp);
    		}
    		//cout<<holder[i]<<endl;
    	}
    	ll ans=0;
    	ans+=holder[0];
    	for(int i=1;i<holder.size();i++){

    		if(holder[i]>0){
    			ans+=holder[i];
    		}
    	}
    	
    	cout<<ans<<endl;



    	t--;
    }

    return 0;
}