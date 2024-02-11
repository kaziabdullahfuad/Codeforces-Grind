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

   int n;
   cin>>n;
   ll sum_x=0;
   ll sum_y=0;
   ll sum_z=0;
   for(int i=1;i<=n;i++){
   		ll x,y,z;
   		cin>>x>>y>>z;

   		sum_x+=x;
   		sum_y+=y;
   		sum_z+=z;

   }

   // cout<<sum_x<<endl;
   // cout<<sum_y<<endl;
   // cout<<sum_z<<endl;

   if(sum_x==0 && sum_y==0 && sum_z==0){
   	cout<<"YES"<<endl;
   }
   else{
   		cout<<"NO"<<endl;
   }

    return 0;
}