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
    void threesumbrute(vector<int>& v1,int target) {
        
        int n=v1.size();

        for(int i=0;i<n-2;i++){

        	for(int j=i+1;j<n-1;j++){

        		for(int k=j+1;k<n;k++){

        			if(v1[i]+v1[j]+v1[k]==target){

        				//cout<<i<<" "<<j<<" "<<k<<" "<<endl;
        				cout<<v1[i]<<" "<<v1[j]<<" "<<v1[k]<<endl;
        			}
        		}
        	}
        }
    }

    vector<vector<int>> threesumopti(vector<int>& v1,int target){

    	int n=v1.size();
    	vector<vector<int>> result;
    	sort(all(v1));
    	// for(int i=0;i<n-2;i++){
    	// 	cout<<v1[i]<<" ";
    	// }
    	//cout<<endl;
    	for(int i=0;i<n-2;i++){

    		ll left=i+1;
    		ll right=n-1;
    		//vector<int> temp;
    		while(left<right){

    			if(v1[i]+v1[left]+v1[right]==target){
    				//cout<<v1[i]<<" "<<v1[left]<<" "<<v1[right]<<endl;
    				// temp.push_back(v1[i]);
    				// temp.push_back(v1[left]);
    				// temp.push_back(v1[right]);
    				result.push_back({v1[i],v1[left],v1[right]});
    				//temp.clear();
    				left++;
    				right--;
    			}
    			else if(v1[i]+v1[left]+v1[right]>target){
    				// choto koro
    				right--;
    			}
    			else if(v1[i]+v1[left]+v1[right]<target){

    				// boro koro
    				left++;
    			}
    		}
    	}



    	return result;

    }
};
int main()
{
	Solution sol1;

	vector<int> v1={12,3,1,2,-6,5,-8,6};
	int target=0;
	// vector<int> v1={7,4,3,2};
	// int target=12;
	//printVector(v1);
	//sol1.threesumbrute(v1,target);
	vector<vector<int>> result;

	result=sol1.threesumopti(v1,target);
	cout<<result.size()<<endl;
	for(int i=0;i<result.size();i++){

		for(int j=0;j<result[i].size();j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	

    return 0;
}