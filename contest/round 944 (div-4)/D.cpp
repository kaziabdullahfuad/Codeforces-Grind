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

    	string s;
    	cin>>s;

    	ll len=s.size();

    	ll ans=1;

    	if(len==1){
    		//cout<<"HERE"<<endl;
    		cout<<1<<endl;
    	}
    	else{

    		// 10 ar pair bair koro oita must lagbe
    		// and 01 ar pair

    		ll one_zero=0;
    		ll zero_one=0;
    		bool alr_sorted=true;
    		string holder=s;
    		sort(all(holder));

    		if(holder==s){
    			alr_sorted=true;
    		}
    		else{
    			alr_sorted=false;
    		}
    	
    		//cout<<alr_sorted<<endl;
    		if(alr_sorted){
    			//cout<<"HERE"<<endl;
    			cout<<1<<endl;
    		}
    		else{
    		for(int i=0;i<len-1;i++){

    			if(s[i]=='1' && s[i+1]=='0'){
    				one_zero++;
    			}
    			else if(s[i]=='0' && s[i+1]=='1'){
    				zero_one++;
    			}
    		}
    		//cout<<one_zero<<" "<<zero_one<<endl;
    		//cout<<zero_one-1<<endl;
    		ans+=one_zero;
    		
    		if(zero_one){
    			ans+=(zero_one-1);
    		}
    		cout<<ans<<endl;
    	}
    }

    	t--;
    }

    return 0;
}