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

   ll n,k;
   cin>>n>>k;
   vector<ll> v1(n);
   
  
   for(int i=0;i<n;i++){
   		cin>>v1[i];
   }

   ll max_val=0;
   ll count=0;
   ll holder=k;
   
   ll left=0,right=0;
   ll sum=0;
   bool flag=true;
   while(right<n){

        cout<<left<<" "<<right<<" "<<sum<<" "<<max_val<<endl;
   		if(v1[right]+sum>k){

            while(left<right){
                sum-=v1[left];
                left++;
            }

            if(v1[right]>k){
                left++;
                right++;
            }
            else{
                sum+=v1[right];
                right++;
            }
        }
        else{
            sum+=v1[right];
            max_val=max(max_val,right-left+1);
            right++;
        }
   }
   //cout<<left<<" "<<right<<endl;
   //cout<<sum<<endl;
   cout<<max_val<<endl;
   

    return 0;
}