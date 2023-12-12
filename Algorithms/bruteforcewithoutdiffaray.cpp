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
       7 -> size of array n 
       3 -> q, number of querys
       0 2 5-> l=0,r=2,val=5. 0<=2 5 added
       so array becomes [5,5,5,0,0,0,0]
       1 3 6
       2 6 1
       Final array-> [5,11,12,7,1,1,1]
    */
    int n;
    cin>>n;
    vector<int> v1(n);

   	int q;
   	cin>>q;

   	for(int i=0;i<q;i++){

   		int l,r,val;
   		cin>>l>>r>>val;

   		for(int i=l;i<=r;i++){
   			v1[i]+=val;
   		}

   		for(auto x:v1){
   			cout<<x<<" ";
   		}
   		cout<<endl;
   	}

    return 0;
}