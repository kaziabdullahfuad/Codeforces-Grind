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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* n- size of array [0,0,0,0,0,0,0]
       q-> number of querys
       l-> where to start from
       r-> how far to go l<=r so inclusive
       val-> value to add in the range
       * 0 based indexing followed*
       7 -> size of array n initialized with all zeroes
       3 -> q, number of querys
       0 2 5-> l=0,r=2,val=5. 0<=2 5 added
       so array becomes [5,5,5,0,0,0,0]
       1 3 6->l,q,r
       2 6 1-> l,q,r
       Final array-> [5,11,12,7,1,1,1]
    */
    // at each query do two operations
    // 1. v1[l]+=val and 2. v1[r+1]-=val
    // do 2nd operation only if (r+1)<v1.size()
    int n;
    cin>>n;
    vector<int> v1(n);

   	int q;
   	cin>>q;

   	for(int i=0;i<q;i++){

   		int l,r,val;
   		cin>>l>>r>>val;

         v1[l]+=val;

         if((r+1)<v1.size()){
            v1[r+1]-=val;
         }
   		
   		for(auto x:v1){
   			cout<<x<<" ";
   		}
   		cout<<endl;
   	}

      // now we do prefix sum
      // [5 6 1 -5 -6 0 0] at each step
      // add previous plus current val except for first index
      // so 5+6=11,1+11=12,
      // result will be [5,11,12,7,1,1,1]

      for(int i=1;i<v1.size();i++){

            v1[i]+=v1[i-1];
      }

      for(auto x:v1){
         cout<<x<<" ";
      }

    return 0;
}