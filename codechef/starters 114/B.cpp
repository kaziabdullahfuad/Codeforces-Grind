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

    	int x,y,z;
    	cin>>x>>y>>z;

    	int area=x*y;

    	int paint=z/2;

    	cout<<paint/area<<endl;

    	t--;
    }

    return 0;
}