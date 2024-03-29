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

    	string s=to_string(n);
    	//cout<<s<<endl;
    	int len=s.size();
    	bool found=true;

    	for(int i=0;i<len;i++){

    		if(s[i]=='0' || s[i]=='1'){
    			//found=false;
    		}
    		else{
    			found=false;
    			break;
    		}
    	}

    	if(found){
    		//cout<<"EKHANE"<<endl;
    		cout<<"YES"<<endl;
    	}
    	else{

    		//cout<<"KAAJ ACHE"<<endl;
    		string holder;
    		ll len;
    		bool found=true;
    		while(n>1){

    			found=true;
    			s=to_string(n);
    			len=s.size();
    			//cout<<s<<endl;
    			for(int i=0;i<len;i++){

		    		if(s[i]=='0' || s[i]=='1'){
		    			//found=false;
	    			}
	    			else{
	    				//cout<<s[i]<<endl;
	    				found=false;
	    				break;
	    			}
    			
    			}

    			if(found==true){
    				break;
    			}

    			if(n%11==0){
    				n/=11;
    			}
    			else{

    				break;
    			}
    		}
    		//debug(n)

    		if(found || n==1){
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