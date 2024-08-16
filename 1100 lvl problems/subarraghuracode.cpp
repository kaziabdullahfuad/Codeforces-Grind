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

    	string s;
    	cin>>s;
    	ll n=s.size();

    	//sort(all(s));
    	map<char,ll> m2;
    	for(int i=0;i<n;i++){
    		m2[s[i]]++;
    	}
    	//cout<<s<<endl;
    	//cout<<m2.size()<<endl;
    	if(m2.size()==1){
    		cout<<"YES"<<endl;
    	}
    	else{

    		ll go_to=m2.size();
    		//debug(go_to)
    		map<char,ll> m1;
    		bool found=true;
    		for(int i=0;i<n;i++){

    			ll j=i;
    			for(j;j<min(i+go_to,n);j++){

    				//cout<<s[j]<<" ";
    				m1[s[j]]++;
    			}
    			for(auto x:m1){
    				if(x.second>=2){
    					//cout<<x.first<<" "<<x.second<<endl;
    					found=false;
    					break;
    				}
    			}
    			m1.clear();
    			//cout<<endl;
    		}

    		if(found){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}