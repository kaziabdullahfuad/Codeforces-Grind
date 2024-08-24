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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	sort(all(v1));

    	ll maxi=v1[n-1];
    	ll mini=maxi+k-1;
    	//cout<<maxi<<" "<<mini<<endl;

    	for(int i=0;i<n-1;i++){

    		ll si=v1.back();
    		ll ei=si+k;
    		ll ans;
    		//cout<<si<<" "<<ei<<endl;
    		if(((v1.back()-v1[i])/k)&1){

    			while(si<=ei){

    				ll mid=(si+ei)/2;

    				if(((mid-v1[i])/k)&1){
    					si=mid+1;
    				}
    				else{
    					ans=mid;
    					ei=mid-1;
    				}
    			}

    			maxi=max(maxi,ans);
    			//cout<<v1[i]<<" "<<maxi<<endl;
    		}
    		else{

    			while(si<=ei){

    				ll mid=(si+ei)/2;

    				if(((mid-v1[i])/k)&1){
    					ei=mid-1;
    				}
    				else{
    					ans=mid;
    					si=mid+1;
    				}
    			}
    			mini=min(mini,ans);
    			//cout<<v1[i]<<" "<<mini<<endl;
    		}



    	}

    	//cout<<maxi<<" "<<mini<<endl;
    	if(maxi<=mini){
    		cout<<maxi<<endl;

    	}
    	else{
    		cout<<-1<<endl;
    	}


    	t--;
    }

    return 0;
}