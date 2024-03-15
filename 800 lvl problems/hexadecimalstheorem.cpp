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

    ll n;
    cin>>n;

    cout<<0<<" "<<0<<" "<<n<<endl;

    // if(n==0){
    // 	cout<<0<<" "<<0<<" "<<0<<endl;
    // }
    // else if(n==1){
    // 	cout<<0<<" "<<0<<" "<<1<<endl;
    // }
    // else{

    // 	ll a=0;
    // 	ll b=1;
    // 	ll c=a+b;

    // 	while(c!=n){

    // 		//cout<<c<<endl;
    // 		a=b;
    // 		b=c;
    // 		c=a+b;
    // 	}

    // 	//cout<<a<<" "<<b<<endl;
    // 	//cout<<a+b<<endl;
    // 	cout<<0<<" "<<a<<" "<<b<<endl;

    // }

    return 0;
}