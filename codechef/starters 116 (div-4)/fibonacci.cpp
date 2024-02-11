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
int fibonacci(int n){

	if(n==0 || n==1){
		return n;
	}

	return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n=4;

    cout<<fibonacci(n);

    return 0;
}