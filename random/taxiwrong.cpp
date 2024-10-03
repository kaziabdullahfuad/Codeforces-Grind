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

   ll n;
   cin>>n;
   vector<ll> v1(n);
   
   for(int i=0;i<n;i++){
   	cin>>v1[i];
   }
   
   sort(all(v1),greater<ll>());

   printVector(v1);

   ll count=0;
   ll sum=0;
   count++;
   for(int i=0;i<n;i++){
   		//cout<<v1[i]<<" ";

   		if(sum+v1[i]>4){
   			// summation 4 ar beshi notun gari lagbe

   			sum=v1[i];
   			count++;
   		}
   		else{
   			// jodi summation 4 ar kom hoi tahole niye nao
   			sum+=v1[i];
   		}

   		cout<<i<<" "<<v1[i]<<" "<<sum<<" "<<count<<endl;
   }

   cout<<count<<endl;

    return 0;
}