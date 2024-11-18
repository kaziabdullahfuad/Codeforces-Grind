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

    	string s;
    	cin>>s;

    	ll turns=n-1;
    	//debug(n)
    	if(n==2){

    		// tahole just alice ar turn
    		if(s[0]=='0' && s[1]=='0'){

    			cout<<"NO"<<endl;
    		}
    		else{
    			cout<<"YES"<<endl;
    		}
    	}
    	else{

    		// last 3 ta element nibo
    		// char first=s[n-3];
    		// char second=s[n-2];
    		// char third=s[n-1];

    		char first,second,third;
    		if(s[0]=='1'){
    			first='1';
    		}
    		else{
    			first='0';
    		}
    		if(s[1]=='1'){
    			second='1';
    		}
    		else{
    			second='0';
    		}
    		if(s[2]=='1'){
    			third='1';
    		}
    		else{
    			third='0';
    		}
    		
    		ll ans=0;
    		// cout<<"HERE"<<endl;
    		// cout<<first<<" "<<second<<" "<<third<<endl;
    		if(first=='0' && second=='0' && third=='0'){
    			//cout<<"NO"<<endl;
    			ans=0;
    		}
    		else if(first=='0' && second=='0' && third=='1'){
    			//cout<<"NO"<<endl;
    			ans=0;
    		}
    		else if(first=='0' && second=='1' && third=='0'){
    			//cout<<"NO"<<endl;
    			ans=0;
    		}
    		else if(first=='0' && second=='1' && third=='1'){
    			//cout<<"YES"<<endl;
    			ans=1;
    		}// 5
    		else if(first=='1' && second=='0' && third=='0'){

    			//cout<<"YES"<<endl;
    			ans=1;
    		}// 6
    		else if(first=='1' && second=='0' && third=='1'){

    			//cout<<"YES	"<<endl;
    			ans=1;
    		}// 7
    		else if(first=='1' && second=='1' && third=='0'){
    			//cout<<"YES"<<endl;
    			ans=1;
    		}// 8
    		else if(first=='1' && second=='1' && third=='1'){

    			//cout<<"YES"<<endl;
    			ans=1;
    		}

    		//alice dise bob dise now alice abar
    		ll start=1;
    		cout<<"AGE"<<endl;
    		debug(ans)
    		for(int i=3;i<n;i++){

    			ll temp=i+1;
    			debug(temp)
    			ll hold=0;
    			if(s[i]=='1'){
    				hold=1;
    			}

    			if(start%2==1){
    				//alice ar turn
    				ans=(ans||hold);
    			}
    			else{
    				ans=(ans&&hold);
    			}

    			debug(ans)
    			start++;
    		}

    		// cout<<ans<<endl;

    		if(ans==1){
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