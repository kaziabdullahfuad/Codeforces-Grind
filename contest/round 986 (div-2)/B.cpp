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

    	ll n,b,c;
    	cin>>n>>b>>c;


    	if(b==0 && c==0){

    		if(n==1){
    			cout<<0<<endl;
    		}
    		else if(n==2){
    			cout<<1<<endl;
    		}
    		else{
    			cout<<-1<<endl;
    		}
    		
    	}
    	else if(b==0){

    		if(n==1){
    			cout<<1<<endl;
    		}
    		else if(n==2){
    			
    			if(c==1){
    				cout<<1<<endl;
    			}
    			else{
    				cout<<2<<endl;
    			}
    		}
    		else if(c>=n){
    			cout<<n<<endl;
    		}
    		else if(c==n-1 || c==n-2){

    			cout<<n-1<<endl;
    		}
    		else{
    			cout<<-1<<endl;
    		}
    	}
    	else if(c==0){

    		// simply a multiple of b?
    		if(n==1){
    			cout<<0<<endl;
    		}
    		else if(n==2){
    			
    			if(b==1){
    				cout<<0<<endl;
    			}
    			else{
    				cout<<1<<endl;
    			}
    		}
    		else if(b>=n){

    			cout<<n-1<<endl;
    		}
    		else{

    			ll holder=n-1;
    			//debug(holder)

    			ll remain=(holder)/b;
    			remain++;
    			//debug(remain)

    			cout<<n-remain<<endl;
    		}

    	}
    	else{

    		// b!=0 and c!=0
    		//cout<<"HERE b!=0 and c!=0"<<endl;
    		if(n==1){
    			
    			cout<<1<<endl;
    		}
    		else if(n==2){
    			
    			if(c==1){
    				cout<<1<<endl;
    			}
    			else{
    				cout<<2<<endl;
    			}
    		}
    		else if(c>=n){

    			//cout<<"HERE"<<endl;
    			cout<<n<<endl;
    		}
    		else if(b>=n){
    			// cout<<"HERE"<<endl;
    			cout<<n-1<<endl;
    		}
    		else{

    			// cout<<"HERE"<<endl;
    			// c b duitai kom
    			ll holder=n-1;
    			//debug(holder)

    			ll rem=(holder-c)/b;
    			rem++;
    			//debug(rem)

    			ll ans=n-rem;
    			cout<<ans<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}