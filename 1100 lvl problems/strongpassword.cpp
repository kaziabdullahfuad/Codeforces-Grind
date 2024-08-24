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

    	int n=s.size();
    	string ans;
    	int count=0;

    	if(n==1){
    		//cout<<"HERE"<<endl;
    		ans+=s[0];
    		
    		//cout<<char(s[0]+1)<<endl;

    		if(ans=="a"){

    			ans+=char(s[0]+1);
    			cout<<ans<<endl;
    		}
    		else if(ans=="z"){
    			ans+=char(s[0]-1);
    			cout<<ans<<endl;
    		}
    		else{
    			ans+=char(s[0]+1);
    			cout<<ans<<endl;
    		}

    	}
    	else{

    		//cout<<"HERE"<<endl;
    		bool found=false;
    		ans=s[0];
    		for(int i=1;i<n;i++){

    			if(i==n-1){
    				// tahole just ager char ar ta mathai rakhte hobe

    				if(s[i]==s[i-1] && found==false){

    					for(int j=0;j<26;j++){

    						//cout<<char(j+97)<<endl;
    						char hold=char(j+97);
    						if(hold!=s[i-1]){
    							ans+=hold;
    							ans+=s[i];
    							found=true;
    							break;
    						}
    					}
    					
    				}
    				else{
    					ans+=s[i];
    				}
    			}
    			else{

    				// pichoner ta nd shamner ta

    				if(s[i]==s[i-1] && found==false){

    					for(int j=0;j<26;j++){

    						//cout<<char(j+97)<<endl;
    						char hold=char(j+97);
    						if(hold!=s[i-1] && hold!=s[i+1]){
    							
    							ans+=hold;
    							ans+=s[i];
    							found=true;
    							break;
    						}
    					}
    					
    				}
    				else{
    					ans+=s[i];
    				}

    			}
    		}

    		//cout<<s<<endl;
    		if(found==false){

    			if(ans[ans.size()-1]=='a' || ans[ans.size()-1]=='z'){
    				ans+='b';
    			}
    			else{

    				char hold=ans[n-1]+1;
    				ans+=hold;
    				//cout<<ans<<endl;
    			}
    			cout<<ans<<endl;

    		}
    		else{
    			cout<<ans<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}