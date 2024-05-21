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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	set<ll> s1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		s1.insert(v1[i]);
    	}
    	
    	if(n==1 || s1.size()==1){
    		cout<<-1<<endl;
    	}
    	else{

    		ll left_count=0;
    		ll right_count=0;
    		for(int i=0;i<n-1;i++){

    			if(v1[i]!=v1[n-1]){
    				break;
    			}
    			else{
    				left_count++;
    			}
    		}

    		for(int i=n-1;i>=1;i--){

    			if(v1[i]!=v1[0]){
    				break;
    			}
    			else{
    				right_count++;
    			}
    		}

    		//cout<<left_count<<endl;
    		//cout<<right_count<<endl;

    		ll min_val=min(left_count,right_count);

    		//cout<<min_val<<endl;

    		// now consecutive dekhar try korbo
    		ll first=v1[0];
    		ll cur=0;
    		ll another_min=1e18;
    		for(int i=0;i<n;i++){

    			if(v1[i]!=first){
    				//debug(cur);
    				another_min=min(another_min,cur);
    				cur=0;
    			}
    			else{
    				cur++;
    			}
    		}

    		//cout<<another_min<<endl;

    		ll main_min=min(min_val,another_min);
    		cout<<main_min<<endl;

    	}

    	t--;
    }

    return 0;
}