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

   ll n,q;
   cin>>n>>q;
   vector<ll> v1(n);
   
   for(int i=0;i<n;i++){
   		cin>>v1[i];
   }

   while(q){

   		int val;
   		cin>>val;

   		ll index=0;

   		for(int i=0;i<n;i++){

   			if(v1[i]==val){
   				index=i;
   				break;
   			}
   		}

   		cout<<index+1<<" ";

   		for(int i=index;i>=1;i--){

   			v1[i]=v1[i-1];
   		}

   		v1[0]=val;

   		q--;
   }
   

    return 0;
}