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
    	string f;
    	cin>>f;

    	// cout<<s<<endl;
    	// cout<<f<<endl;

    	ll index=0;

    	ll n=s.size();
    	ll len=f.size();
    	bool found=false;
    	for(int i=0;i<n;i++){
    		//debug(index)
    		if(index<len){

    			if(s[i]==f[index]){
    				index++;
    			}
    			else if(s[i]=='?'){

    				s[i]=f[index];
    				index++;
    			}
    		}
    		else{
    			found=true;

    			if(s[i]=='?'){
    				s[i]='a';
    			}
    		}
    	}

    	//cout<<index<<" "<<s<<endl;

    	if(index>=len){
    		cout<<"YES"<<endl;
    		cout<<s<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}



    	t--;
    }

    return 0;
}