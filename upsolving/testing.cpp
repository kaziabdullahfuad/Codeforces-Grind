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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int tester=10000-12+1; 
    // cout<<tester<<endl;

    vector<int> v1={10, 2, 3, 6, 1, 3};
    for(auto x:v1) cout<<x<<" ";
    cout<<endl;

    int sum=accumulate(v1.begin(),v1.end(),int);

    // char a='a';
    // char b='a';
    // char c='a';

    // // aivhabe hobe na
    // if(a==b==c){
    // 	cout<<"YES"<<endl;
    // }
    // else{
    // 	cout<<"NO"<<endl;
    // }

    // if(a==b && a==c){
    // 	cout<<"YES"<<endl;
    // }
    // else{
    // 	cout<<"NO"<<endl;
    // }

   // int t;
   //  cin>>t;

   //  while(t){

   //  	ll n;
   //  	cin>>n;
   //  	vector<ll> v1(n);

   //  	for(int i=0;i<n;i++){
   //  		cin>>v1[i];
   //  	}

   //  	ll left=0;
   //  	ll right=n-1;
   //  	ll max_val=INT_MIN;

   //  	for(int i=0;i<v1.size()-1;i++){

   //  		ll sum=v1[left];
   //  		if(sum>max_val){
   //  			max_val=sum;
   //  		}

   //  		while((v1[i]%2)!=(v1[i+1]%2)){

   //  			sum+=v1[i+1];
   //  		}
    		
   //  	}
    	

   //  	t--;
   //  }

    return 0;
}