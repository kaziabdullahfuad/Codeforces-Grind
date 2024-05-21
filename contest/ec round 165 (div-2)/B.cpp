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

    	string s;
    	cin>>s;

    	ll len=s.size();
    	ll no_ones=0;
    	ll ans=0;
    	for(int i=0;i<len;i++){

    		if(s[i]=='1'){
    			no_ones++;
    		}
    		else{
    			
    			if(no_ones){
    				ans+=(no_ones+1);
    			}

    		}
    		//debug(no_ones)
    		//debug(ans)
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}