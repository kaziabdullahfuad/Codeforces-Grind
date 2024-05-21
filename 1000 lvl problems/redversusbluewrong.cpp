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

    	ll n,r,b;
    	cin>>n>>r>>b;
    	ll min_val=1e18;
    	//cout<<min_val<<endl;
    	ll index=0;
    	for(ll i=1;i<r;i++){

    		// b ar theke beshi to parbo na
    		// i=1 hole ekta kore R ar baki thake koita,
    		// i=2 hole ekta kore 2 ta kore r ar baki thake koita
    		ll holder=(i+1)*b;

    		//debug(holder);

    		if(holder>n){
    			break;
    		}
    		else{
    			ll remain=n-holder;
    			//debug(remain)
    			ll max_val=max(i,remain);

    			if(max_val<min_val){
    				index=i;
    				min_val=max_val;
    			}
    			//debug(min_val)
    		}
    	}

    	//cout<<min_val<<endl;
    	//cout<<index<<endl;
    	ll remain=n-((index+1)*b);
    	//cout<<remain<<endl;
    	ll b_times=b;
    	string ans;

    	while(b_times){

    		ll temp=index;

    		while(temp){
    			ans.push_back('R');
    			temp--;
    		}
    		ans.push_back('B');
    		b_times--;

    	}

    	//cout<<ans<<endl;
    	//cout<<ans.size()<<endl;

    	while(remain){

    		ans.push_back('R');
    		remain--;
    	}

    	cout<<ans<<endl;
    	//cout<<ans.size()<<endl;


    	t--;
    }

    return 0;
}