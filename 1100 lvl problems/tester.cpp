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

    	// if(abs(101)%2==abs(-99)%2){
    	// 	cout<<"YES"<<endl;
    	// }
    	// else{
    	// 	cout<<"NO"<<endl;
    	// }

    	string s="abcd";
    	char x='l';
    	string l="hello";
    	cout<<s<<endl;
    	s.insert(5,l);

    	cout<<s<<endl;
    	// ll n;
    	// cin>>n;
    	// vector<ll> v1(n);

    	// for(int i=0;i<n;i++){
    	// 	cin>>v1[i];
    	// }

    	// printVector(v1);

    	// sort(all(v1));

    	// printVector(v1);

    	// //ll *iter;
    	// vector<ll>::iterator lower;
    	// lower=lower_bound(all(v1),7);
    	// cout<<*lower<<endl;
    	// ll pos=lower-v1.begin();
    	// cout<<pos<<endl;

    	t--;
    }

    return 0;
}