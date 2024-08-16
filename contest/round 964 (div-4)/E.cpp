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

    vector<ll> prefix(200001);
    for(ll i=1;i<=200001;i++){

    	ll hold=i;
    	ll count=0;

    	while(hold){

    		hold/=3;
    		count++;
    	}
    	prefix[i]=count;
    }
    while(t){

    	ll l,r;
    	cin>>l>>r;

    	if(r-l+1==2){

    		ll ans=1e18;
    		ll first=l;
    		ll second=l+1;
    		ll count=0;
    		while(second){

    			first*=3;
    			second/=3;
    			count++;
    		}

    		//cout<<first<<" "<<second<<" "<<count<<endl;

    		while(first){
    			//debug(count)
    			first/=3;
    			count++;
    			if(first==0){
    				count++;
    			}
    		}

    		first=l;
    		second=l+1;
    		ll count_two=0;
    		while(first){

    			second*=3;
    			first/=3;
    			count_two++;
    		}

    		//cout<<first<<" "<<second<<" "<<count_two<<endl;

    		while(second){
    			//debug(count)
    			second/=3;
    			count_two++;
    			
    		}
    		
    		ans=min(count,count_two);
    		cout<<ans<<endl;
    		
    	}
    	else{

    		ll first=l;
    		ll second=l+1;
    		ll count=0;
    		//cout<<first<<" "<<second<<endl;
    		while(second){

    			//cout<<first<<" "<<second<<endl;
    			first*=3;
    			second/=3;
    			count++;
    		}

    		//cout<<first<<" "<<second<<" "<<count<<endl;
    		ll sum=0;
    		count++;
    		while(first){
    			//debug(count)
    			first/=3;
    			sum++;
    			count++;
    			// if(first==0){
    			// 	count++;
    			// }
    		}

    		//cout<<first<<" "<<second<<" "<<count<<endl;

    		for(int i=l+2;i<=r;i++){

    			ll hold=i;
    			//cout<<hold<<endl;
    			// ll sum=0;
    			// while(hold){

    			// 	hold/=3;
    			// 	count++;
    				
    			// }
    			count+=prefix[i];
    		}

    		first=l;
    		second=l+1;
    		ll count_two=0;
    		while(first){

    			second*=3;
    			first/=3;
    			count_two++;
    		}

    		//cout<<first<<" "<<second<<" "<<count_two<<endl;

    		while(second){
    			//debug(count)
    			second/=3;
    			count_two++;
    			
    		}

    		for(int i=l+2;i<=r;i++){

    			ll hold=i;
    			//cout<<hold<<endl;
    			
    			// while(hold){

    			// 	hold/=3;
    			// 	count_two++;
    				
    			// }
    			count_two+=prefix[i];
    		}

    		//cout<<count<<" "<<count_two<<endl;

    		cout<<min(count,count_two)<<endl;
    	}

    	t--;
    }

    return 0;
}