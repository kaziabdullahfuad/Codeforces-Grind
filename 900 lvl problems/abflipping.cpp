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

    	string s;
    	cin>>s;
    	ll first_a=-1;
    	ll last_b=-1;
    	for(int i=0;i<n;i++){
    		//cout<<s[i]<<endl;
    		if(s[i]=='A'){
    			first_a=i;
    			break;
    		}
    	}

    	for(int i=n-1;i>=0;i--){

    		if(s[i]=='B'){
    			last_b=i;
    			break;
    		}
    	}

    	//cout<<first_a<<" "<<last_b<<endl;

    	if(first_a==-1 || last_b==-1 || first_a>last_b){
    		cout<<0<<endl;
    	}
    	else{
    		cout<<last_b-first_a<<endl;
    	}

    	t--;
    }

    return 0;
}