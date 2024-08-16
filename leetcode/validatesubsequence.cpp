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
    bool validatesubsequence(vector<int>& v1,vector<int> v2) {
        
        int left=0;
        int len=v2.size();
        int n=v1.size();

        for(int i=0;i<v1.size();i++){

        	if(v1[i]==v2[left]){
        		//cout<<i<<" "<<left<<" "<<v1[i]<<endl;
        		left++;
        	}

        	if(left>=len){
        		break;
        	}
        }

        if(left==len){
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

	vector<int> v1={5,1,22,25,6,-1,8,10};
	vector<int> v2={1,6,-1,10};
	printVector(v1);
	printVector(v2);
	cout<<sol1.validatesubsequence(v1,v2)<<endl;
	

    return 0;
}