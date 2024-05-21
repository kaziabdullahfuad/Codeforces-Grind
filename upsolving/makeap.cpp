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
    //cout<<"HELLO"<<endl;
    while(t){

    	ll a,b,c;
    	cin>>a>>b>>c;

    	ll ba_diff=b-a;
    	ll cb_diff=c-b;

    	if(ba_diff==cb_diff){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// jodi a multiple korte hoi

    		if(cb_diff%a==0){
    			cout<<"YES"<<endl;
    		} // c ar jonno ba diff
    		else if(ba_diff%c==0){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}

    	}

    	t--;
    }

    return 0;
}