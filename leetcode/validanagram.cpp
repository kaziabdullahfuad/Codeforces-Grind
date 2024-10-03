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
class Solution {
public:
    bool isAnagram(string s, string t) {
        
       vector<int> v1(26);
       vector<int> v2(26);

       for(int i=0;i<s.size();i++){

       		int val=s[i]-'a';

       		v1[val]++;
       }

        for(int i=0;i<t.size();i++){

       		int val=t[i]-'a';

       		v2[val]++;
       }

       //printVector(v1);
       //printVector(v2);

       if(v1==v2){
       		return true;
       }
       else{

       		return false;
       }
    }
};
int main()
{
	Solution sol1;

	ll t;
	cin>>t;

	while(t){

		string s1,s2;
		cin>>s1>>s2;

		// 26 ta character thake

		cout<<sol1.isAnagram(s1,s2)<<endl;

		t--;
	}
	

    return 0;
}