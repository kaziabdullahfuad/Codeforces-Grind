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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	vector<ll> v2(n);
    	vector<ll> v3(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v3[i];
    	}

    	cout<<x<<endl;
    	printVector(v1);
    	printVector(v2);
    	printVector(v3);

    	vector<ll> bits(32);

    	ll hold=x;
    	ll index=0;
    	while(hold){

    		if(hold%2==0){
    			bits[index]=0;
    		}
    		else{
    			bits[index]=1;
    		}
    		hold/=2;
    		index++;
    	}

    	printVector(bits);

    	bool first,second,third=false;

    	ll left=0;
    	ll mid=0;
    	ll right=0;

    	cout<<right<<endl;
    	ll j=0;
    	vector<ll> ans(32,0);
    	bool main_ans=false;
    	printVector(ans);
    	cout<<"HERE"<<endl;
		while(left<n || mid<n || right<n){

			if(left<n){

				// dekho ata thik ase ki na
				j=0;
				ll hold=v1[left];
				int count=1;
				//debug(v1[left])
				while(hold){

					if(hold%2==0){

						if(bits[j]!=0){
							//debug(v1[left])
							//debug(j)
							//cout<<"EKHANE"<<endl;
							count=-1;
							break;
						}

					}
					else{

						// 1 hobe
						if(bits[j]!=1){
							count=-1;
							break;
						}
						else{
							ans[j]=1;
						}
					}
					j++;
					hold/=2;
				}

				if(count==1){
					first=true;
					left++;
				}
				else{
					first=false;
				}

			}
			if(mid<n){

				// dekho ata thik ase ki na
				j=0;
				ll hold=v2[mid];
				int count=1;
				while(hold){

					if(hold%2==0){

						if(bits[j]!=0){
							count=-1;
							break;
						}

					}
					else{

						// 1 hobe
						if(bits[j]!=1){
							count=-1;
							break;
						}
						else{
							ans[j]=1;
						}
					}
					j++;
					hold/=2;
				}

				if(count==1){
					second=true;
					mid++;
				}
				else{
					second=false;
				}
			}
			if(right<n){

				// dekho ata thik ase ki na
				j=0;
				ll hold=v3[right];
				int count=1;
				while(hold){

					if(hold%2==0){

						if(bits[j]!=0){
							count=-1;
							break;
						}

					}
					else{

						// 1 hobe
						if(bits[j]!=1){
							count=-1;
							break;
						}
						else{
							ans[j]=1;
						}
					}
					j++;
					hold/=2;
				}

				if(count==1){
					third=true;
					right++;
				}
				else{
					third=false;
				}

			}

			// now dekho pura bits ta same ki na
			bool hoise=true;
			for(int i=0;i<32;i++){

				if(ans[i]!=bits[i]){
					hoise=false;
					break;
				}
			}

			if(hoise){
				main_ans=true;
				break;
			}

			if(first==false && second==false && third==false){
				cout<<"AH"<<endl;
				cout<<left<<" "<<mid<<" "<<right<<endl;
				main_ans=false;
				break;
			}
			first=false;
			second=false;
			third=false;
		}

		if(main_ans){
			cout<<"YES"<<endl;
		}    	
		else{
			cout<<"NO"<<endl;
		}

    	t--;
    }

    return 0;
}