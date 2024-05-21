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

    	int n;              cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
 
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int ans=a[n-1]-a[0];
 
        for(int i=1;i<=n-1;i++){
            ans=max(ans,a[i]-a[0]);
        }
        for(int i=0;i<=n-2;i++){
            ans=max(ans,a[n-1]-a[i]);
        }
        for(int i=1;i<=n-1;i++){
            ans=max(ans,a[i-1]-a[i]);
        }
 
        cout<<ans<<endl;
    	
    	t--;
    }

    return 0;
}