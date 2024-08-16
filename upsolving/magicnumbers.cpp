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

    
	string s;
	cin>>s;

	if(s[0]!='1'){
		cout<<"NO"<<endl;
	}
	else{

		// options 1,14 and 144
		// boro theke shuru koro

		int n=s.size();
		bool found=true;
		for(int i=0;i<n;i++){

			// 144 check age i=0 thakle 0+2<n
			if((i+2<n) && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
				i+=2;
			}// 14
			else if((i+1)<n && s[i]=='1' && s[i+1]=='4'){
				i+=1;
			}
			else if(s[i]=='1'){

			}
			else{
				found=false;
				break;
			}
		}

		if(found){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

    


    

    return 0;
}