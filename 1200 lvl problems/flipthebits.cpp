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

    	string s1,s2;
    	cin>>s1>>s2;

    	vector<ll> prefix(n);

    	prefix[0]=0;
    	int zero=0;
    	int one=0;
    	if(s1[0]=='0'){
    		zero++;
    	}
    	else{
    		one++;
    	}

    	for(int i=1;i<n;i++){

    		if(s1[i]=='1'){
    			one++;
    		}
    		else{
    			zero++;
    		}

    		if(one==zero){
    			prefix[i]=1;
    		}
    		else{
    			prefix[i]=0;
    		}
    	}

    	if(s1==s2){
    		cout<<"YES"<<endl;
    	}
    	else{

    		//printVector(prefix);
    		string hold="";
    		string hold2="";
    		string inv="";
    		bool found=false;
    		int index=0;
    		for(int i=0;i<n;i++){

    			if(prefix[i]==1){

    				//debug(i)
    				hold+=s1[i];
    				hold2+=s2[i];

    				if(s1[i]=='1'){
    					inv+='0';
    				}
    				else{
    					inv+='1';
    				}
    				
    				if(hold==hold2 || inv==hold2){
    					found=true;
    					index=i;
    				}
    				else{
    					found=false;
    					break;
    				}

    				hold="";
		    		hold2="";
		    		inv="";
    			}
    			else{

    				hold+=s1[i];
    				hold2+=s2[i];

    				if(s1[i]=='1'){
    					inv+='0';
    				}
    				else{
    					inv+='1';
    				}
    			}
    		}

    		//cout<<found<<" "<<index<<endl;

    		if(found){

    			bool another=true;
    			for(int i=index+1;i<n;i++){

    				if(s1[i]!=s2[i]){
    					another=false;
    					break;
    				}
    			}

    			if(another){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}