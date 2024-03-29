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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	vector<ll> holder;

    	bool alr_sorted=true;

    	for(int i=0;i<n-1;i++){

    		if(v1[i]>v1[i+1]){
    			alr_sorted=false;
    			break;
    		}
    	}

    	if(alr_sorted==true){
    		cout<<"YES"<<endl;
    	}
    	else{
    	for(int i=n-1;i>=0;i--){

    		if(v1[i]>=10){

    			// append
    			ll val=v1[i];
    			//debug(val)
    			while(val){
    				ll temp=val%10;
    				//cout<<temp<<endl;
    				holder.push_back(temp);
    				val/=10;
    			}
    		}
    		else{
    			holder.push_back(v1[i]);
    		}
    	}

    	 printVector(holder);
    	reverse(all(holder));
    	printVector(holder);
    	bool found=true;

    	for(int i=0;i<holder.size()-1;i++){

    		if(holder[i]>holder[i+1]){
    			//debug(holder[i]) debug(holder[i+1])
    			found=false;
    		}
    	}

    	if(found){

    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }



    	t--;
    }

    return 0;
}