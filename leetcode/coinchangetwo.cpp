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
    int change(int amount, vector<int>& coins) {
        
        int n=coins.size();

        // n holo row and amount+1 holo size
        vector<vector<int>> v1(n,vector<int>(amount+1));

        for(int i=0;i<n;i++){

        	v1[i][0]=1;
        }

        for(int i=0;i<n;i++){

        	int val=coins[i];
        	//debug(val)
        	for(int j=1;j<=amount;j++){
        		
        		if(i==0){
        			// mane ekdom first uporer ta

        			if(val>j){
        				//cout<<v1[i][j]<<" ";
        				continue;
        			}
        			else{

        				int index=j-val;
        				v1[i][j]=v1[i][index];
        				//cout<<v1[i][j]<<" ";
        			}
        			
        		}
        		else{


        			if(val>j){

        				v1[i][j]=v1[i-1][j];
        				//cout<<v1[i][j]<<" ";
        			}
        			else{

        				//uporer and ager col add dekhte hobe

        				v1[i][j]=v1[i-1][j]+v1[i][j-val];
        				//cout<<v1[i][j]<<" ";
        			}
        		}
        	}
        	//cout<<endl;
        }

        return v1[n-1][amount];
        
    }
};
int main()
{
	Solution sol1;

	// vector<int> v1={1,2,5};
	// int amount=5;
	vector<int> v1={1,2,3};
	int amount=7;
	// vector<int> v1={10};
	// int amount=10;

	cout<<sol1.change(amount,v1);

    return 0;
}