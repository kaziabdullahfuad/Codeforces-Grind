// problem link:https://codeforces.com/contest/1907/problem/B
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

    	string holder;
    	map<char,ll> m1;

    	ll len=s.size();

    	for(ll i=len-1;i>=0;i--){

    		if(s[i]=='b'){

    			m1[s[i]]++;
    		}
    		else if(s[i]=='B'){

    			m1[s[i]]++;
    		}
    		else if(s[i]>=97 && s[i]<=122){

    			if(m1['b']>=1){

    				m1['b']--;
    			}
    			else{

    				holder.push_back(s[i]);
    			}
    		}
    		else if(s[i]>=65 && s[i]<=90){

    			if(m1['B']>=1){

    				m1['B']--;
    			}
    			else{
    				holder.push_back(s[i]);
    			}
    		}
    	}

    	//cout<<s<<endl;
    	//cout<<holder<<endl;
    	reverse(holder.begin(),holder.end());
    	cout<<holder<<endl;

    	t--;
    }

    return 0;
}