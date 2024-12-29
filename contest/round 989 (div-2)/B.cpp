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

    	ll n,m,k;
    	cin>>n>>m>>k;

    	string s;
    	cin>>s;

    	// cout<<n<<" "<<m<<" "<<k<<endl;

    	// cout<<s<<endl;
    	


    	ll one=0;
    	ll zero=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='1'){
    			one++;
    		}
    		else{
    			zero++;
    		}
    	}

    	if(k==1 && m==1){

    		cout<<zero<<endl;
    	}
    	else{

    		vector<ll> val;
    		ll count=0;
    		ll ans=0;
    		bool found=false;
    		//cout<<s<<endl;
    		for(int i=0;i<n;i++){

    			if(s[i]=='0'){
    				count++;
    				found=true;
    			}
    			else{
    				if(found==true){
    					//debug(count)
    					val.push_back(count);
    					found=false;
    				}
    				count=0;
    				
    			}
    		}

    		//cout<<count<<endl;
    		//debug(found)

    		if(found){
    			val.push_back(count);
    		}

    		//printVector(val);

    		sort(all(val),greater<ll>());

    		printVector(val);

    		ll len=val.size();

    		for(int i=0;i<len;i++){


    			if(val[i]>=m){

    				// tahole choto korte hobe naki

    				ll start=m-1;
    				//ll adder=(m-1)+(k-1)+1;
    				ll adder=m+k-1ll;
    				ans++;

    				while(start<val[i]){

    					start+=adder;
    					ans++;
    				}
    			}
    		}

    		//debug(ans)
    		cout<<ans<<endl;

    	}

    	t--;
    }

    return 0;
}