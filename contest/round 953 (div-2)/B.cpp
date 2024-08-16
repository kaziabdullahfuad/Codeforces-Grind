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

    	// n=no of buns
    	// a= price of buns
    	// b= price of first bun to be sold at mod price
    	ll n,a,b;
    	cin>>n>>a>>b;
    	
    	
    	ll min_val=min(n,b);

    	if(a>=b){
    		//cout<<"A>=b"<<endl;
    		ll ans=n*a;
    		cout<<ans<<endl;
    	}
    	else{

    		//cout<<b<<" "<<a<<endl;
    		ll diff=b-a+1;
    		ll range=b-n+1;
    		//debug(range)
    		//debug(diff)
    		// 1+2+3...a+ (x1)=sum
    		// a*(a+1)/2 + x1=sum
    		if(range>=a){
    			// tahole purata nibo
    			//cout<<"range>=a"<<endl;
    			ll total=(b*(b+1))/2;
    			//debug(total)
    			ll hold=((range-1)*(range))/2;
    			//debug(hold)
    			ll ans=total-hold;
    			//debug(ans)
    			cout<<ans<<endl;
    			ll remain=n-diff;
    			//debug(remain)
    		}
    		else{
    			//cout<<"AIJE DADA AAIDIKE"<<endl;
    			// purata nibo na
    			// 2 ta nibo
    			ll dif=b-a;
    			//debug(dif)
    			ll total=(b*(b+1))/2;
    			//debug(total)
    			ll hold=(a*(a+1))/2;
    			//debug(hold)
    			ll ans=total-hold;
    			//debug(ans)
    			ll remain=n-dif;
    			ans+=(remain*a);
    			cout<<ans<<endl;
    			
    		}

    		

    	}

    	t--;
    }

    return 0;
}