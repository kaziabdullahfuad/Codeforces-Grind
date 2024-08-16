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
    void smallestdifference(vector<int>& v1,vector<int>& v2) {
        
        int min_val=INT_MAX;
        int first=0;
        int second=0;
        sort(all(v1));
        sort(all(v2));
        for(int i=0;i<v1.size();i++){
        	cout<<v1[i]<<endl;
        	for(int j=0;j<v2.size();j++){

        		int diff=abs(v1[i]-v2[j]);
        		//cout<<diff<<" ";
        		if(diff<min_val){
        			first=v1[i];
        			second=v2[j];
        			min_val=diff;
        		}
        	}
        	//cout<<endl;
        }

        cout<<first<<" "<<second<<endl;
    }
};
int main()
{
	Solution sol1;

	vector<int> v1={-1,5,10,20,28,3};

	vector<int> v2={26,134,135,15,17};
	printVector(v1);
	printVector(v2);
	sol1.smallestdifference(v1,v2);

    return 0;
}