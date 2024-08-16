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

    	ll count=0;
    	ll n=s.size();
    	ll max_val=0;
    	ll start=0;
    	ll end=0;
    	bool flag=true;
    	for(int i=0;i<n;i++){

    		if(s[i]=='1'){


    			count++;
    		}
    		else{

    			if(flag){
    				//debug(count)
    				start=count;
    				flag=false;
    			}
    			max_val=max(max_val,count);
    			count=0;
    		}
    	}
    	end=count;
    	//cout<<start<<" "<<end<<endl;
    	max_val=max(max_val,count);
    	max_val=max(max_val,start+end);
    	//cout<<max_val<<endl;

    	if(max_val==0){
    		cout<<0<<endl;
    	}
    	else if(max_val==n){

    		cout<<n*n<<endl;
    	}
    	else{

    		ll len=max_val;
    		ll wid=1;
    		//cout<<len<<" "<<wid<<endl;
    		while(len && wid){

    			//cout<<len<<" "<<wid<<endl;
    			ll holder=len*wid;
    			//debug(holder)
    			max_val=max(max_val,holder);
    			len--;
    			wid++;
    		}
    		cout<<max_val<<endl;
    	}
    	


    	t--;
    }

    return 0;
}