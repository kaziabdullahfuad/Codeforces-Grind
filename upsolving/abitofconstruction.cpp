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

    int t;
    cin>>t;

    while(t){

    	int n, k;
        cin >> n >> k;
        vector<int> a(n);
        if (n == 1) {
            a[0] = k;
            cout<<k<<endl;
        }
        else {
            
            ll start=1;

            while(start*2<=k){

            	start*=2;
            }

            //cout<<start<<endl;
            start--;
            //debug(start);

            a[0]=start;
            a[1]=k-start;

            printVector(a);
        }


    	t--;
    }

    return 0;
}