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

    	ll n;
    	cin>>n;

    	vector<vector<char>> v1(n,vector<char>(n,'0'));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<n;j++){
    			cin>>v1[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<n;j++){
    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	ll koibar=n/2;
    	//debug(koibar)
    	ll ans=0;
    	for(int i=0,j=n-1;i<koibar;i++,j--){

    		ll row=i;
    		ll col=j;

    		while(row<=j-1){
    			ll sum=0;
    			//debug(i)
    			char left=v1[i][row];
    			char right_left=v1[row][j];
    			char lower_left=v1[col][i];
    			char lower_right=v1[j][col];
    			vector<char> temp;
    			//cout<<left<<" "<<right_left<<" "<<lower_left<<" "<<lower_right<<endl;
    			temp.push_back(left);
    			temp.push_back(right_left);
    			temp.push_back(lower_left);
    			temp.push_back(lower_right);
    			ll zero=0;
    			ll one=0;
    			for(auto x:temp){
    				//cout<<x;
    				if(x=='0'){
    					zero++;
    				}
    				else{
    					one++;
    				}
    			}
    			//cout<<endl;
    			//debug(zero)
    			//debug(one)
    			ll hold=4-max(one,zero);
    			//debug(hold)
    			ans+=hold;
    			//debug(ans)

    			row++;
    			col--;
    		}

    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}