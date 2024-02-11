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
void all_divisors(vector<int> &divisors,int n){

	for(int i=2;i*i<=n;i++){

		if(n%i==0){

			int val=n/i;

			if(val!=i){
				divisors.push_back(i);
				divisors.push_back(val);
			}
			else{
				divisors.push_back(i);
			}
		}
	}
}
void find_all_primes(vector<int> &v1,int n){

	for(int i=2;i*i<v1.size();i++){

		if(v1[i]!=0){
			int val=i;
			val+=i;
			//cout<<"i="<<i<<endl;
			while(val<=n){

				//cout<<val<<" ";
				v1[val]=0;
				val+=i;
				
			}
		}
			//cout<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   //int n=50;
   int n;
   cin>>n;

   // divisors from 1 to 10
   vector<int> divisors;

   all_divisors(divisors,n);
   //sort(divisors.begin(),divisors.end());

   cout<<"All Divisors: ";
   for(auto x:divisors){
   		cout<<x<<" ";
   }
   cout<<endl;

   vector<int> all_primes(n+1);

   iota(all_primes.begin(),all_primes.end(),0);

   // for(int i=0;i<all_primes.size();i++){

   // 		//cout<<i<<" ";
   // 		cout<<all_primes[i]<<" ";
   // }
   // cout<<endl;

   find_all_primes(all_primes,n);
   vector<int> primes_contain;

   for(int i=2;i<all_primes.size();i++){

   		//cout<<i<<" ";
   		cout<<all_primes[i]<<" ";
   		if(all_primes[i]!=0)
   			primes_contain.push_back(all_primes[i]);
   }
   cout<<endl;

   for(auto x:primes_contain)
   		cout<<x<<" ";

   	cout<<endl;

    return 0;
}