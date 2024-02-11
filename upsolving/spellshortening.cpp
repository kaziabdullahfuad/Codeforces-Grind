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
    	bool found=false;
    	string holder="";
    	for(int i=0;i<n-1;i++){

    		if(s[i]>s[i+1] && found==false){
    			found=true;
    			continue;
    		}
    		else{
    			holder+=s[i];
    		}
    	}

    	if(found==true){

    		holder+=s[n-1];
    		cout<<holder<<endl;
    	}
    	else{
    		cout<<holder<<endl;
    	}

    	t--;
    }

    return 0;
}