#include<iostream>
#include<numeric>
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

    	int n; cin >> n;
 
        vector<int>a(n);
        for(auto &i : a) cin >> i;
 
        sort(a.begin(), a.end());
 
        int answer = n;
 		
 		//printVector(a);

        for(int i = 0; i + 1 < n; i++) {
            int left = i + 1, right = n - 1, index = i + 1;
 			// debug(i)
 			// debug(left)
 			// debug(right)
 			// debug(index)

 			//cout<<"HERE"<<endl;
            while(left <= right) {
                int mid = (left + right) / 2;
                
                if(a[i] + a[i + 1] > a[mid]) {
                    index = mid, left = mid + 1;
                }
                else right = mid - 1;
            }
 
            answer = min(answer, n - (index - i + 1));
            //cout<<"ANS HERE"<<endl;
           // debug(answer)
        }
 
        cout << answer << "\n";

    	t--;
    }

    return 0;
}