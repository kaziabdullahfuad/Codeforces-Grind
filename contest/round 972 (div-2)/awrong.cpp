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

    	vector<char> v1={'a','e','i','o','u'};

    	string s="";
    	ll left=0;
    	bool found=false;
    	while(true){

    		s+=v1[left];
    		char temp=v1[left];
    		if(s.size()==n){
    			break;
    		}

    		for(int i=0;i<v1.size();i++){

    			if(v1[i]!=temp){
    				s+=v1[i];
    			}
    			if(s.size()==n-1){

    				for(int j=0;j<v1.size();j++){

    					if(v1[j]!=s[0] && v1[j]!=s[s.size()-1]){
    						s+=v1[j];
    						break;
    					}
    				}
    				found=true;
    				break;
    			}
    			if(s.size()==n){
    				found=true;
    				break;
    			}
    		}

    		if(found){
    			break;
    		}

    		left=(left+1)%5;
    		//debug(left)
    	}

    	//cout<<s.size()<<endl;
    	cout<<s<<endl;

    	t--;
    }

    return 0;
}