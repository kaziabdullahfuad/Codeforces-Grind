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

    	ll n,k;
    	cin>>n>>k;

    	if(k==n){

    		for(int i=1;i<=n;i++){
    			cout<<i<<" ";
    		}
    		cout<<endl;
    	}
    	else if(n==3){

    		if(k==2){
    			cout<<1<<" "<<2<<endl;
    		}
    	}
    	else{

    		ll count=1;
    		ll val=-24;
    		ll main_count=-48;
    		bool found=false;
    		for(ll i=2;i<=n;i++){
    			//cout<<i<<endl;
    			
    			if((i+i)<=n){
    				
    				ll holder=i;
    				count=0;
    				while(holder<=n && count<k){
    					//cout<<"Holding: "<<holder<<endl;
    					holder+=i;
    					count++;

    				}
    			}
    			else{

    				break;
    			}
    			//cout<<"AND I HERE: "<<i<<endl;
    			//cout<<"HERE COUNT: "<<count<<endl;

    			if(count==k){
    				main_count=count;
    				val=i;
    				found=true;
    			}
    		}

    		if(found==true){

	    		//cout<<main_count<<" "<<val<<endl;
	    		ll keep=val;
	    		for(ll i=1;i<=main_count;i++){

	    			cout<<val<<" ";
	    			val+=keep;
	    		}
	    		cout<<endl;
	    	}
	    	else{

	    		for(int i=1;i<=k;i++){
	    			cout<<i<<" ";
	    		}
	    		cout<<endl;
	    	}

    	}

    	t--;
    }

    return 0;
}