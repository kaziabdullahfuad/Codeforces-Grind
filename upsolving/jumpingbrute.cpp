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
bool can(int mid){

	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int le = -1, ri = 1e9;
    int mid = (le + ri) / 2;

    cout<<le<<" "<<ri<<" "<<mid<<endl;

    // if can true then low is same, high=mid and mid =mid
    // if can false then low is mid, high=high and mid =mid
    (can(mid) ? ri : le) = mid;

    cout<<le<<" "<<ri<<" "<<mid<<endl;

    return 0;
}