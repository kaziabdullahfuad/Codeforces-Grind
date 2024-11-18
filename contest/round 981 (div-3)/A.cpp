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

    	ll start=1;
    	ll ans=0;
    	ll temp=-n;
    	ll count=1;
    	while(ans<=n && ans>=temp){

    		//debug(count)
    		if(count%2==1){
    			ll hold=-start;
    			//cout<<"SAKA"<<endl;
    			//debug(hold)
    			ans+=hold;
    			//debug(ans)
    			
    		}
    		else{
    			ans+=start;
    			//cout<<"KAKA"<<endl;
    			//ans+=hold;
    			//debug(ans)

    		}

    		if(ans>n || ans<temp){
    			break;
    		}
    		start+=2;
    		count++;
    		//debug(ans)
    		
    	}
    	//debug(count)
    	if(count%2==1){

    		cout<<"Sakurako"<<endl;
    	}
    	else{
    		cout<<"Kosuke"<<endl;
    	}

    	t--;
    }

    return 0;
}