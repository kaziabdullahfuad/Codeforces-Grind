// leetcode:https://leetcode.com/problems/three-divisors/
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
class Solution{

public:
	bool isThree(int n){

		int count=0;
		for(int i=1;i*i<=n;i++){

			if(n%i==0){

				count++;

				if(i!=(n/i)){
					count++;
				}
			}
		}

		//cout<<count<<endl;
		if(count==3){
			
			return true;
		}
		else{
			 return false;
		}

	}
};

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n=4;

    Solution mysol;

   	cout<<mysol.isThree(n)<<endl;



    return 0;
}