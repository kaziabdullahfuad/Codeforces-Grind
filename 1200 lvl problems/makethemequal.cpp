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
    	char c;
    	cin>>n;
    	cin>>c;

    	string s;
    	cin>>s;

    	//cout<<n<<" "<<c<<" "<<s<<endl;

    	set<char> s1;

    	for(int i=0;i<n;i++){

    		s1.insert(s[i]);
    	}

    	if(s1.size()==1 && s[0]==c){

    		cout<<0<<endl;
    	}
    	else{

    		// last element equal to char ekta hoi

    		if(n==3 && s[1]==c){

    			cout<<1<<endl;
    			cout<<2<<endl;
    		}
    		else if(s[n-1]==c){

    			// ekta operation
    			cout<<1<<endl;
    			cout<<n<<endl;
    		}
    		else{
    			bool found=true;
    			for(int i=0;i<n-1;i++){

    				if(s[i]!=c){
    					found=false;
    					break;
    				}
    			}

    			if(found){
    				cout<<1<<endl;
    				cout<<n-1<<endl;
    			}
    			else{
    				// cout<<2<<endl;
    				// cout<<n<<" "<<n-1<<endl;

    				// lets see amon instance pai ki na jeta
    				// divide korte pare na
    				set<int> s1;
    				bool main_found=false;
    				int index;
    				for(int i=1;i<n;i++){

    					if(s[i]==c){

    						ll adder=i+1;
    						ll j=i;
    						//cout<<j<<" "<<adder<<endl;
    						bool found=true;

    						while(j<n){

    							j+=adder;

    							if(j<n && s[j]!=c){
    								//debug(adder)
    								//debug(s[j])
    								found=false;
    								break;
    							}
    						}
    						if(found){
    							index=i+1;
    							main_found=true;
    							break;
    						}
    						//cout<<j<<endl;
    						//cout<<j<<" "<<adder<<" "<<found<<endl;
    					}
    				}
    				//debug(main_found)
    				if(main_found){
    					cout<<1<<endl;
    					cout<<index<<endl;
    				}
    				else{
    					cout<<2<<endl;
    					cout<<n<<" "<<n-1<<endl;
    				}
    			}
    			
    		}
    	}

    	t--;
    }

    return 0;
}