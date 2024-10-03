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

    	ll last=n+k-1;
    	ll last_age=n+k-2;
    	ll last_agesum=(last_age*(last_age+1))/2;
    	//cout<<last_agesum<<endl;
    	last_agesum-=(k*(k-1))/2;
    	//cout<<last_agesum<<endl;
    	if(n==2){

    		cout<<abs(k-(n+k-1))<<endl;
    	}
    	else{

    		//cout<<last<<" "<<last_age<<" "<<last_agesum<<endl;
    		ll ans=1e18;
    		//cout<<ans<<endl;

    		while(true){

    			ll dis=abs(last_agesum-last);

    			//cout<<last<<" "<<last_age<<" "<<last_agesum<<" "<<dis<<endl;
    			//debug(ans)
    			cout<<ans<<" "<<dis<<endl;
    			if(dis>ans){
    				break;
    			}
    			else{
    				ans=dis;
    			}

    			last+=last_age;
    			last_agesum-=last_age;
    			last_age--;
    		}

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}