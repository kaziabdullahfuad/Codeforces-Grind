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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    	int a, b;
	  cin >> a >> b;
	  int c = 0;
	  int ans = 0;
	  while (a) {

	    ans += a;
	    //debug(ans);
	    c += a;
	    //debug(c);
	    a = c/b;
	    //debug(a);
	    c -= b*(c/b);
	    //c=c%b;
	    //debug(c);
	    
	    
	  }
	  cout << ans << '\n';
    	
    

    return 0;
}