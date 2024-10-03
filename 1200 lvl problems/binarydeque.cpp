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

    	ll n,s;
    	cin>>n>>s;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll total=accumulate(all(v1),0ll);

    	if(total==s){
    		cout<<0<<endl;
    	}
    	else if(total<s){
    		cout<<-1<<endl;
    	}
    	else{

    		vector<ll> prefix(n);
    		vector<ll> suffix(n);
    		
    		//printVector(v1);

    		// koita one dorkar
    		ll dorkar=total-s;
    		//debug(dorkar)
    		prefix[0]=v1[0];
    		suffix[n-1]=v1[n-1];
    		for(int i=1;i<n;i++){
    			prefix[i]=prefix[i-1]+v1[i];
    		}

    		for(int i=n-2;i>=0;i--){

    			suffix[i]=suffix[i+1]+v1[i];
    		}

    		// printVector(prefix);
    		// printVector(suffix);
    		ll left_val=n;
    		ll right_val=n;

    		for(int i=0;i<n;i++){
    			if(prefix[i]==dorkar){
    				left_val=i+1;
    				break;
    			}
    		}
    		ll right=n-1;
    		for(int i=n-1;i>=0;i--){
    			if(suffix[i]==dorkar){
    				right=i;
    				right_val=n-i;
    				break;
    			}
    		}

    		//cout<<left_val<<" "<<right_val<<endl;

    		ll ans=min(left_val,right_val);
    		//cout<<ans<<endl;

    		ll left=0;
    		
    		// debug(left)
    		// debug(right)
    		while(left<n && right<n){

    			if(prefix[left]==dorkar){
    				ans=min(ans,left+1);
    				break;
    			}

    			ll hold=prefix[left]+suffix[right];
    			//cout<<"HERE: "<<left<<" "<<hold<<" "<<right<<endl;
    			ll temp=right;
    			while(right<n && hold>=dorkar){

    				//debug(right)
    				hold=prefix[left]+suffix[right];
    				//debug(hold)
    				if(hold==dorkar){
    					temp=right;
    					ans=min(ans,n-right+left+1);

    				}

    				right++;
    			}

    			if(right>=n){
    				break;
    			}
    			right=temp;
    			left++;
    		}

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}