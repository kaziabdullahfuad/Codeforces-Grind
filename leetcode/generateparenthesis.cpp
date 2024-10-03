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
    vector<string> generateParenthesis(int n) {
     	
     	string s1;
     	vector<string> res;

     	helper(s1,res,n,0,0);

     	return res;
    }

    void helper(string s1,vector<string> &res,int n,int left,int right){

    		if(s1.size()==(2*n)){

    			res.push_back(s1);
    			return;
    		}

    		if(left<n){

    			s1+='(';
    			helper(s1,res,n,left+1,right);
    			s1.pop_back();
    		}

    		if(right<left && right<n){

    			s1+=')';
    			helper(s1,res,n,left,right+1);
    			s1.pop_back();
    		}
    }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		int n;
		cin>>n;

		vector<string> result;

		result=sol1.generateParenthesis(n);

		printVector(result);

		t--;
	}
	

    return 0;
}