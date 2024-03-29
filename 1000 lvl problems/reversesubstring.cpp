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

   ll n;
   cin>>n;

   string s;
   cin>>s;

   bool found=false;
   int left,right;
   for(int i=0;i<n-1;i++){

   		if(s[i]>s[i+1]){
   			found=true;
   			left=i;
   			right=i+1;
   			break;
   		}
   }

   if(found){
   		left++;
   		right++;
   		cout<<"YES"<<endl;
   		cout<<left<<" "<<right<<endl;
   }
   else{
   		cout<<"NO"<<endl;
   }

    return 0;
}