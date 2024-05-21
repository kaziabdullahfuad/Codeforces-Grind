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

    	string s,x;
    	cin>>s>>x;

    	vector<int> v1(26);

    	for(int i=0;i<x.size();i++){

    		//cout<<x[i]-'A'<<" ";
    		v1[x[i]-'A']++;
    	}
    	//cout<<endl;

    	//printVector(v1);

    	string ans="";

    	for(int i=s.size()-1;i>=0;i--){

    		if(v1[s[i]-'A']>=1){
    			//cout<<s[i]<<" ";
    			ans+=s[i];
    			v1[s[i]-'A']--;
    		}
    	}

    	reverse(all(ans));

    	//cout<<ans<<endl;

    	if(ans==x){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}