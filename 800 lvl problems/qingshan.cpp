//problem link:https://codeforces.com/problemset/problem/1890/B
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T){

    	int n,m;
    	cin>>n>>m;

    	string s;
    	cin>>s;
    	string t;
    	cin>>t;

    	// prothom dekho t nije ki thik ki na
    	bool thik=true;
    	for(int i=0;i<t.size()-1;i++){

    		if(t[i]==t[i+1]){
    			thik=false;
    			break;
    		}
    	}

    	// ar por dekho s ar problem ase ki na
    	bool s_thik=true;

    	for(int i=0;i<s.size()-1;i++){

    		if(s[i]==s[i+1]){
    			s_thik=false;
    			break;
    		}
    	}

    	if(s.size()==1 || s_thik==true){
    		cout<<"YES"<<endl;
    	}
    	else if(thik==false){
    		cout<<"NO"<<endl;
    	} 
    	else{

    		bool works=true;

    		if(t.size()==1){

    			char first=t[0];

    			for(int i=0;i<s.size()-1;i++){

    				if(s[i]==s[i+1]){

    					if(first==s[i] || first==s[i+1]){

    						works=false;
    						break;
    					}
    				}
    			}

    			if(works){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    		else{

    			char first=t[0];
    			char last=t[t.size()-1];

    			for(int i=0;i<s.size()-1;i++){

    				if(s[i]==s[i+1]){

    					if(first==s[i] || last==s[i+1]){

    						works=false;
    						break;
    					}
    				}
    			}

    			if(works){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}

    		}
    		
    	}

    	T--;
    }

    return 0;
}