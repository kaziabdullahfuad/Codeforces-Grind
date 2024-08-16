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

    	ll n=s.size();

    	ll no_one=0;
    	ll no_zeroes=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){
    			no_zeroes++;
    		}
    		else{
    			no_one++;
    		}
    	}
    	//debug(no_one)
    	//debug(no_zeroes)

    	ll min_val=min(no_one,no_zeroes);
    	ll index=-1;
    	for(int i=0;i<n;i++){

    		if(s[i]=='0' && no_one>=1){
    			no_one--;
    			
    		}
    		else if(s[i]=='1' && no_zeroes>=1){
    			no_zeroes--;
    		}
    		else{
    			//cout<<i<<endl;
    			index=n-i;
    			break;

    		}
    	}

    	if(index==-1){
    		cout<<0<<endl;
    	}
    	else{
    		cout<<index<<endl;
    	}
    	

    	t--;
    }

    return 0;
}