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

    ll start=1;
    while(t){

    	string s,p;
    	cin>>s>>p;

    	ll n=s.size();
    	ll m=p.size();

    	//debug(p)
    	ll ans=0;
    	
    	for(int i=0;i<=9;i++){

    		char hold='a'+i;
    		//cout<<hold<<endl;
    		//debug(hold)
    		vector<ll> sum(n+1);

    		for(int j=1;j<=n;j++){

    			if(s[j-1]==hold){

    				sum[j]=sum[j-1]+1;
    			}
    			else{
    				sum[j]=sum[j-1];
    			}
    		}

    		//debug(sum[n])

    		for(int k=0;k<m;k++){

    			// atar index use kore range paba

    			if(p[k]==hold){


    				//cout<<"Index Range "<<k+1<<" "<<n-(m-(k+1))<<endl;
    				//cout<<sum[n-m+k+1]-sum[k]<<endl;
    				ans+=sum[n-m+k+1]-sum[k];
    			}
    		}
    	}

    	//cout<<ans<<endl; Case 1: 3

    	cout<<"Case "<<start<<": "<<ans<<endl;
    	start++;

    	t--;
    }

    return 0;
}