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

    	string s;
    	cin>>s;

    	if(n==1){
    		cout<<"NO"<<endl;
    	}
    	else if(n==2){

    		if(s[0]!=s[1]){
    			cout<<"NO"<<endl;
    		}
    		else{
    			cout<<"H"<<"R"<<endl;
    		}
    	}
    	else{

    		ll hori=0;
    		ll vert=0;

    		for(int i=0;i<n;i++){

    			if(s[i]=='N'){
    				vert++;
    			}
    			else if(s[i]=='S'){
    				vert--;
    			}
    			else if(s[i]=='E'){
    				hori++;
    			}
    			else if(s[i]=='W'){
    				hori--;
    			}
    		}

    		if(abs(hori%2)==1 || abs(vert%2)==1){
    			cout<<"NO"<<endl;
    		}
    		else{
    			//cout<<hori<<" "<<vert<<endl;

    			int north=0,south=0,e=1,w=1;
    			string ans="";
    			char m[2]={'R','H'};
    			//cout<<"HERE"<<endl;
    			//cout<<m[0]<<" "<<m[1]<<endl;

    			
    			for(int i=0;i<n;i++){
    				//cout<<ans<<endl;
    			
    				if(s[i]=='N'){
    					ans+=m[north];
    					north=1-north;
    				}
    				else if(s[i]=='S'){
    					ans+=m[south];
    					south=1-south;
    				}
    				else if(s[i]=='E'){
    					ans+=m[e];
    					e=1-e;
    				}
    				else if(s[i]=='W'){
    					ans+=m[w];
    					w=1-w;
    				}
    			}

    			cout<<ans<<endl;

    		}
    	}



    	t--;
    }

    return 0;
}