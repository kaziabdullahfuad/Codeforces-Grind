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

    	if(n<=2){
    		cout<<stoi(s)<<endl;
    	}
    	else{
    		ll ans=1e9;
    		for(int i=0;i<n-1;i++){

    			vector<ll> v1;
    			// i ar age nao
    			//debug(i)
    			for(int j=0;j<i;j++){
    				v1.push_back(s[j]-'0');
    				//debug(j)

    			}

    			// i and i+1 nawa
    			v1.push_back(stoi(s.substr(i,2)));

    			for(int j=i+2;j<n;j++){
    				v1.push_back(s[j]-'0');
    			}

    			sort(all(v1));
    			if(v1[0]==0){
    				//cout<<0<<endl;
    				ans=0;
    				break;
    			}
    			ll sum=0;
    			for(int j=0;j<v1.size();j++){

    				if(v1[j]!=1){
    					sum+=v1[j];
    				}
    			}

    			if(sum==0)
    				sum=1;
    			
    			//debug(sum)
    			ans=min(ans,sum);
    		}

    		cout<<ans<<endl;
    	}



    		
    	

    	t--;
    }

    return 0;
}