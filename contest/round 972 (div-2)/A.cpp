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
    	
    	if(n<=5){

    		for(int i=0;i<v1.size();i++){

    			s+=v1[i];
    			if(s.size()==n){
    				break;
    			}

    		}
    		cout<<s<<endl;
    	}
    	else{
    		// 6 theke start

    		if(n%5==0){

    			ll koita=n/5;

    			//cout<<koita<<endl;

    			for(int i=0;i<v1.size();i++){

    				int temp=koita;
    				while(temp){

    					s+=v1[i];
    					temp--;
    				}
    			}

    			//cout<<s.size()<<endl;
    			cout<<s<<endl;
    		}
    		else{

    			// ar maane koita element re extra banabo
    			// baki gula ke ektai rakhbo

    			ll baki=(n+5-1)/5;
    			ll koita=n%5;
    			ll count=0;
    			//cout<<koita<<endl;
    			//cout<<baki<<endl;
    			ll rest=baki-1;
    			for(int i=0;i<v1.size();i++){

    				ll temp=baki;
    				ll temp2=rest;
    				if(koita>0){

    					while(temp){
    						s+=v1[i];

    						temp--;
    					}
    					koita--;
    				}
    				else{

    					while(temp2){
    						s+=v1[i];
    						temp2--;
    					}
    				}

    				if(s.size()==n){
    					break;
    				}
    			}

    			//cout<<s.size()<<endl;
    			cout<<s<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}