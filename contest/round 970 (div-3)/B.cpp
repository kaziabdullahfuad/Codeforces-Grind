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

    	ll sqr=sqrtl(n);
    	

    	if(sqr==sqrtl(n)){

    		// sqr to asei
    		// first a prothom row jao naki
    		bool found=true;
    		//cout<<s<<endl;
    		for(int i=0;i<sqr;i++){

    			if(s[i]!='1'){

    				found=false;
    				break;
    			}
    		}

    		//cout<<found<<endl;
    		// now 3 theke shuru
    		ll len=n-sqr;

    		for(int i=sqr;i<len;i++){

    			if(i%sqr==0 || i%sqr==sqr-1){

    				if(s[i]!='1'){
    					found=false;
    					break;
    				}
    			}
    			else{

    				if(s[i]!='0'){
    					//debug(i)
    					//debug(s[i])
    					found=false;
    					break;
    				}
    			}
    		}

    		// now it must have all zero

    		for(int i=len;i<n;i++){

    			if(s[i]!='1'){
    				found=false;
    				break;
    			}
    		}

    		if(found){
    			cout<<"Yes"<<endl;
    		}
    		else{
    			cout<<"No"<<endl;
    		}
    		
    	}
    	else{
    		cout<<"No"<<endl;
    	}

    	t--;
    }

    return 0;
}