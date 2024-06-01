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

    	ll x;
    	cin>>x;

    	// highest bit theke ekta beshi bair kori
    	if(x==1){
    		cout<<1<<endl;
    		cout<<1<<endl;
    	}
    	else{
    		ll temp=1;
    	ll count=0;
    	while(temp<=x){

    		//cout<<temp<<endl;
    		temp*=2;
    		count++;
    	}

    	//cout<<temp<<" "<<count<<endl;

    	ll remain=temp-x;
    	//cout<<remain<<endl;
    	bool found=true;
    	vector<ll> ans(count+1);
    	ll j=0;
    	ll last=-100031;
    	while(remain){

    		if(remain%2){
    			if((j-last)==1){
    				cout<<"L and J same:"<<last<<" "<<j<<endl;
    				found=false;
    				break;
    			}
    			ans[j]=-1;
    			last=j;
    		}
    		remain/=2;
    		j++;
    	}
    	ans[ans.size()-1]=1;

    	cout<<ans.size()<<endl;

    	printVector(ans);
    	
    }
    	

    	t--;
    }

    return 0;
}