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
const ll tod=1e9+7;
const ll mod=10000007;
ll dp[10000+1];
ll fn(int n,int a,int b,int c,int d,int e,int f){

	// 6 ta hobe
	if(dp[n]!=-1){
		return dp[n]%mod;
	}
	else if(n==0){
		return a;
	}
	else if(n==1){
		return b;
	}
	else if(n==2){
		return c;
	}
	else if(n==3){
		return d;
	}
	else if(n==4){
		return e;
	}
	else if(n==5){
		return f;
	}

	dp[n]=fn(n-1,a,b,c,d,e,f)+fn(n-2,a,b,c,d,e,f)+fn(n-3,a,b,c,d,e,f)+fn(n-4,a,b,c,d,e,f)+fn(n-5,a,b,c,d,e,f)+fn(n-6,a,b,c,d,e,f);

	return dp[n]%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    ll count=1;
    while(t){

    	// 7 integers
    	ll  a,b,c,d,e,f,n;
    	cin>>a>>b>>c>>d>>e>>f>>n;
    	//cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<n<<endl;

    	dp[0]=a;
    	dp[1]=b;
    	dp[2]=c;
    	dp[3]=d;
    	dp[4]=e;
    	dp[5]=f;

    	for(int i=6;i<=10000;i++){
    		dp[i]=-1;
    	}
    	//debug(mod)
    	//debug(tod)
    	// Case 1: 216339
    	cout<<"Case "<<count<<": "<<fn(n,a,b,c,d,e,f)%mod<<endl;

    	count++;

    	t--;
    }

    return 0;
}