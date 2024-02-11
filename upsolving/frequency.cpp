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

   string s;
   cin>>s;
   map<char,int> m1;

   int n=s.size();

   for(int i=0;i<n;i++){
   		m1[s[i]]++;
   }

   int max_val=1;

   for(auto x:m1){

   		//cout<<x.second<<endl;
   		max_val=max(max_val,x.second);
   }

   //cout<<max_val<<endl;
   char l;

   for(auto x:m1){

   		if(x.second==max_val){
   			l=x.first;
   			break;
   		}
   }

   cout<<l<<endl;


    return 0;
}