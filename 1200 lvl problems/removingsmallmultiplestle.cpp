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

    	//cout<<s<<endl;

    	set<ll> s1;
    	ll sum=0;
    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){

    			// ekhane ashle sure first time asche
    			//debug(i)
    			ll adder=i+1;	
    			ll index=i;
    			//cout<<"HERE"<<" "<<adder<<endl;
    			// choto kono multiple pai ki na
    			// set ar dik diye jao
    			bool found=false;
    			for(auto x:s1){

    				if(x==1){
    					// karon x=1 hole oita niyei ashto
    					continue;
    				}
    				else if(adder%x==0){

    					// shobche choto potential candidate
    					ll hold=x+x;

    					while(hold<adder && s1.find(hold)!=s1.end()){

    						hold+=x;
    					}

    					if(hold==adder){
    						found=true;
    						adder=x;
    						//cout<<"Hoise"<<" "<<hold<<" "<<x<<endl;
    						break;
    					}
    				}
    			}
    			//debug(adder)
    			while(index<n && s[index]=='0'){

    				//debug(index)
    				s[index]='1';
    				s1.insert(index+1);
    				index+=adder;
    				sum+=adder;
    			}


    			//debug(sum)
    		}
    	}

    	for(auto x:s1){
    		cout<<x<<" ";
    	}
    	cout<<endl;
    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}