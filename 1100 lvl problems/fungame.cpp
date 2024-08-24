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

    	//cout<<s1<<endl;
    	//cout<<s2<<endl;
    	bool found=true;

    	for(int i=0;i<n;i++){

    		if(s1[i]!=s2[i]){

    			if(s1[i]=='1'){
    				found=true;
    				break;
    			}
    			else{
    				//cout<<s1[i]<<" "<<s2[i]<<endl;
    				found=false;
    				break;
    			}
    		}
    		else{

    			if(s1[i]=='1'){
    				found=true;
    				break;
    			}
    		}
    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}