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
	ll a,b,sum;
	ll c;
	ll count=0;
	for(ll i=1;i<=n;i++){
		//int count=0;
		for(ll j=i;j<=n;j++){

			//cout<<i<<" "<<j<<" ";
			//count++;
			a=i*i;
			b=j*j;
			sum=a+b;
			c=sqrtl(sum);
			if(c*c==sum && c<=n){
				//cout<<"SHURU"<<endl;
				count++;
				// debug(i)
				// debug(j)
				// debug(sum)
				// debug(c)
			}
		}
		//cout<<endl;
		//debug(count)
	}


    cout<<count<<endl;

    return 0;
}