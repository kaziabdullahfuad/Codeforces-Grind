//problem link:https://codeforces.com/problemset/problem/1849/A
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int bread,cheese,ham;
    	cin>>bread>>cheese>>ham;

    	int sum=cheese+ham;
    	// answer always odd since 2b plus 1 ham for 1 layer
    	if(bread>sum){
    		// that means all ingredient will be used so
    		// if b=10,c=1,h=2 then combi bcbhbh->b.
    		// notice how there are 3 pairs so 6 plus extra one
    		cout<<sum*2+1<<endl;
    	}
    	else{

    		// condiments more than bread
    		// so all bread is used
    		// if b=5,c=7,h=8 then combi bhbhbhbh->b
    		// notice how 4 pairs and one extra b
    		cout<<(bread-1)*2+1<<endl;

    	}
    	t--;
    }

    return 0;
}