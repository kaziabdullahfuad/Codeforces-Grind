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
template<typename t>
void printVector(vector<t> &v1){

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

    	ll n,x;
    	cin>>n>>x;

    	string s;
    	cin>>s;

    	ll ans=0;
    	bool found=true;
    	for(int i=0;i<n;i++){
    		
    		if(s[i]=='0'){
    			ans-=1;
    		}
    		else{
    			ans=x;
    		}
    		//cout<<ans<<endl;
    		if(ans<0){
    			//cout<<"FALLEN ANS: "<<ans<<endl;
    			found=false;
    			break;
    		}
    	}

    	//cout<<endl;
    	//cout<<ans<<endl;
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