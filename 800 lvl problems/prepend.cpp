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

    	ll left=0;
    	ll right=n-1;

    	if(n==1){
    		cout<<1<<endl;
    	}
    	else{

    		ll count=0;
    		while(s[left]!=s[right] && left<right){

    			count++;
    			left++;
    			right--;
    		}

    		//cout<<count<<endl;

    		cout<<n-(count*2)<<endl;
    	}

    	t--;
    }

    return 0;
}