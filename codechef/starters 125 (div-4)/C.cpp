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
    	ll max_val=0;
    	ll left,right;
    	ll count=0;
    	ll no_zero=0;
    	ll no_one=0;
    	for(int i=0;i<n;i++){
    		if(s[i]=='0'){
    			no_zero++;
    		}
    		else{
    			no_one++;
    		}
    	}

    	if(no_zero==0){
    		cout<<no_one<<endl;
    	}
    	else{

	    	for(int i=0;i<n;i++){
	    		count=0;

	    		if(s[i]=='0'){

	    			int hold=i;
	    			//debug(hold)
	    			while(s[hold]=='0' && hold<n){

	    				hold++;
	    				count++;
	    			}

	    			max_val=max(count,max_val);
	    			//debug(hold)
	    			hold--;

	    			i=hold;

	    		}
	    	}

	    	//cout<<max_val<<endl;
	    	//cout<<no_one<<endl;
	    	cout<<no_one+max_val<<endl;
    }

    	t--;
    }

    return 0;
}