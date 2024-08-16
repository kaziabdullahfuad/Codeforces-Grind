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
    		bool found=true;
    		map<ll,char> m1;

    		for(int i=0;i<go_to;i++){

    			m1[i%go_to]=s[i];
    		}

    		// for(auto x:m1){
    		// 	cout<<x.first<<" "<<x.second<<endl;
    		// }

    		for(int i=go_to;i<n;i++){

    			if(m1[i%go_to]!=s[i]){
    				//cout<<m1[i%go_to]<<" "<<s[i]<<endl;
    				found=false;
    				break;
    			}
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