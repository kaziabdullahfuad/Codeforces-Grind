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

    	ll a,b,c;
    	cin>>a>>b>>c;

    	ll min_val=min(a,b);
    	min_val=min(min_val,c);

    	ll count=0;
    	//debug(min_val)

    	while(a!=min_val && count<3){

    		a-=min_val;
    		count++;
    	}

    	//cout<<a<<" "<<count<<endl;

    	while(b!=min_val && count<3){
    		//cout<<b<<endl;
    		b-=min_val;
    		count++;
    	}

    	//cout<<b<<" "<<count<<endl;

    	while(c!=min_val && count<3){
    		//cout<<b<<endl;
    		c-=min_val;
    		count++;
    	}

    	//cout<<c<<" "<<count<<endl;

    	//cout<<a<<" "<<b<<" "<<c<<endl;

    	if(a==min_val && b==min_val && c==min_val && count<=3){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}