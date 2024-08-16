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

    	string s;
    	cin>>s;

    	ll no_zero=0;
    	ll no_one=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){
    			no_zero++;
    		}
    		else{
    			no_one++;
    		}
    	}

    	if(no_one>no_zero){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// 00 gula ekshathe decrease
    		// 01 ba 10 decrease kore laav nai tahole 1 kombe

    		string holder="";

    		cout<<s<<endl;
    		
    		for(int i=0;i<n;i++){

    			if(s[i]=='0'){

    				holder+="0";
    				ll temp=i;
    				debug(i)
    				while(temp<n && s[temp]=='0'){
    					temp++;
    				}
    				debug(temp)
    				if(temp==n-1){
    					if(s[temp]=='1'){
    						holder+='1';
    					}
    				}
    				i=temp;
    			}
    			else{

    				holder+="1";
    				ll temp=i;
    				debug(i)
    				while(temp<n && s[temp]=='0'){
    					temp++;
    				}
    				debug(temp)
    				if(temp==n-1){
    					if(s[temp]=='0'){
    						holder+='0';
    					}
    				}
    				i=temp;
    			}

    		}

    		cout<<holder<<endl;
    		no_zero=0;
    		no_one=0;
    		for(int i=0;i<holder.size();i++){

    			if(holder[i]=='0'){
    				no_zero++;
    			}
    			else{
    				no_one++;
    			}
    		}

    		if(no_one>no_zero){
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