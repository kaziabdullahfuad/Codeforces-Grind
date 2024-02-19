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

    
    	int n,k;
    	cin>>n>>k;

    	int sum=0;
    	int remainder=0;
    	while(n){

    		remainder+=n%k;
    		sum+=n;
    		// cout<<n<<endl;
    		// cout<<sum<<endl;
    		// cout<<remainder<<endl;
    		n/=k;
    	}
    	//cout<<sum<<endl;
    	//debug(remainder)
    	remainder/=k;
    	//debug(remainder)
    	sum+=remainder;
    	cout<<sum<<endl;
    	
    

    return 0;
}