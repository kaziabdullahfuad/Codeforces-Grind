#include<iostream>
#include<string>
#include<vector>
#include <unordered_map>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
   unordered_map<char,int> m1;

   string s;
   cin>>s;

   //cout<<s<<endl;

   for(ll i=0;i<s.size();i++){

   		m1[s[i]]++;
   }

   ll odd_count=0;
   for(auto x:m1){

   		// cout<<x.first<<":"<<x.second<<endl;
   		if(x.second%2!=0)
   			odd_count++;
   		
   }

   if(odd_count>1){
   		cout<<"NO SOLUTION";
   }
   else if (odd_count==1){
   	char l;
   	for(auto x:m1){

   		if(x.second%2!=0){
   			l=x.first;
   			m1[x.first]--;
   			//cout<<x.second<<endl;
   		}
   		
   }
   // cout<<s.size()<<endl;
   // cout<<l<<endl;
   s[s.size()/2]=l;
   //cout<<s<<endl;
   ll left=0;
   ll right=s.size()-1;
   for(auto x:m1){
   		ll num=x.second;
   		while(num){
   			s[left]=x.first;
   			s[right]=x.first;
   			//cout<<s<<endl;
   			left++;
   			right--;
   			num-=2;
   		}
   		
   }
   cout<<s<<endl;

   }
   else{
	   ll left=0;
	   ll right=s.size()-1;
	   for(auto x:m1){
	   		ll num=x.second;
	   		while(num){
	   			s[left]=x.first;
	   			s[right]=x.first;
	   			//cout<<s<<endl;
	   			left++;
	   			right--;
	   			num-=2;
	   		}
	   		
	   }
	   cout<<s<<endl;
   }

    return 0;
}