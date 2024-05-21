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

    	string s;
    	cin>>s;
    	
    	if(k==1){
    		ll b_count=0;
    		for(int i=0;i<n;i++){
    			if(s[i]=='B'){
    				b_count++;
    			}
    		}

    		if(b_count>=1){
    			cout<<0<<endl;
    		}
    		else{
    			cout<<1<<endl;
    		}
    	}
    	else{

    		ll right=k;
    		right--;
    		ll b_count=0;
    		ll w_count=0;
    		//cout<<right<<endl;
    		for(int i=0;i<right;i++){
    			
    			//cout<<s[i];
    			if(s[i]=='B'){
    				b_count++;
    			}
    			else{
    				w_count++;
    			}
    		}

    		//cout<<b_count<<" "<<w_count<<endl;
    		ll left=0;
    		ll min_val=1e18;
    		while(right<n){

    			if(s[right]=='B'){
    				b_count++;
    			}
    			else{
    				w_count++;
    			}

    			//cout<<b_count<<" "<<w_count<<endl;
    			min_val=min(min_val,w_count);

    			if(s[left]=='B'){
    				b_count--;
    			}
    			else{
    				w_count--;
    			}

    			right++;
    			left++;
    		}

    		cout<<min_val<<endl;

    	}

    	t--;
    }

    return 0;
}