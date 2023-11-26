#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
bool pileEmpty(ll a,ll b){

	if(a==0 && b==0){
		return true;
	}
	else if(a<=0 || b<=0){
		return false;
	}

	return pileEmpty(a-1,b-2) || pileEmpty(a-2,b-1);	 
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
	
	while(t){
		ll a,b;
		cin>>a>>b;
		bool possible=false;

		if((a+b)%3==0){
			ll max_num=max(a,b);
			ll min_num=min(a,b);

			if(max_num>(min_num*2)){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{

			cout<<"NO"<<endl;
		}

		t--;
	}

	// while(t){
	// 	ll a,b;
	// 	cin>>a>>b;
	// 	bool possible=false;

	// 	while(a>0 && b>0){



	// 		//cout<<a<<" "<<b<<endl;
	// 		if((a==2 && b==1) || (a==1 && b==2)){
	// 			possible=true;
	// 			break;
	// 		}
	// 		if(a%2==0 && b%2==0){
	// 			ll max_num=max(a,b);
	// 			ll min_num=min(a,b);

	// 			if((max_num/2)==min_num){
	// 				possible=true;
	// 				break;
	// 			}
	// 			else{
	// 				a-=2;
	// 				b-=1;
	// 			}
	// 		}
	// 		else{
	// 			a-=2;
	// 			b-=1;
	// 		}
	// 	}

	// 	 //cout<<possible<<endl;
	// 	if(possible){
	// 		cout<<"YES"<<endl;
	// 	}
	// 	else{
	// 		cout<<"NO"<<endl;
	// 	}

	// 	t--;
	// }

    
    return 0;
	
}