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

    	if(n==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    		string first="AB";
    		string second="BA";

    		string s="AA";

    		int start=1;
    		int count=2;
    		bool ek_kom=false;
    		bool katai=false;

    		while(count<n){

    			if(count==n){
    				katai=true;
    				break;
    			}
    			else if(count==n-1){
    				ek_kom=true;
    				break;
    			}
    			else{

    				if(start%2==1){
    					s+=first;
    					count++;
    				}
    				else{
    					s+=second;
    					count++;
    				}

    				if(count==n){
    				katai=true;
    				break;
    			}
    			else if(count==n-1){
    				ek_kom=true;
    				break;
    			}

    			
    			//debug(count)
    			start++;
    		}
    	}

    	//cout<<count<<endl;
    	//cout<<s<<endl;
    	int counter=0;
    	for(int i=1;i<s.size()-1;i++){

    		if(s[i-1]==s[i] && s[i+1]!=s[i]){
    			counter++;
    		}
    		else if(s[i-1]!=s[i] && s[i+1]==s[i]){
    			counter++;
    		}
    	}
    	cout<<counter<<endl;
    	if(counter==n){
    		cout<<"YES"<<endl;
    		cout<<s<<endl;
    	}
    	else{

    		if(s[s.size()-1]=='B'){
    			s+=first;
    			cout<<"YES"<<endl;
    			cout<<s<<endl;
    		}
    		else{
    			s+=second;
    			cout<<"YES"<<endl;
    			cout<<s<<endl;
    		}
    	}

    	}

    	t--;
    }

    return 0;
}