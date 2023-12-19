//problem link:https://codeforces.com/problemset/problem/1851/B
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

    	int n;
    	cin>>n;
    	vector<int> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	vector<int> holder=v1;

    	// for(auto x:holder){
    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;

    	sort(holder.begin(),holder.end());

    	// for(auto x:holder){
    	// 	cout<<x<<" ";
    	// }
    	//cout<<endl;
    	bool found=true;
    	for(int i=0;i<v1.size();i++){

    		// cout<<v1[i]%2<<endl;
    		// cout<<holder[i]%2<<endl;

    		if((v1[i]%2)!=(holder[i]%2)){
    			found=false;
    			break;
    			//cout<<"MILE NA"<<endl;
    		}
    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	// bool alr_sorted=true;

    	// for(int i=0;i<v1.size()-1;i++){

    	// 	if(v1[i]>v1[i+1]){
    	// 		alr_sorted=false;
    	// 		break;
    	// 	}
    	// }

    	// if(alr_sorted){
    	// 	cout<<"YES"<<endl;
    	// }
    	// else{

    	// 	// map each values index
    	// 	vector<pair<int,int>> holder;

    	// 	for(int i=0;i<v1.size();i++){

    	// 		holder.push_back({v1[i],i});
    	// 	}

    		
    	// 	sort(holder.begin(),holder.end());

    		
    	// 	int index=0;
    	// 	//cout<<holder[index].first<<endl;
    	// 	bool found=true;
    	// 	for(int i=0;i<v1.size();i++){

    	// 		if(v1[i]>holder[index].first){

    	// 			if((v1[i]%2==0) && (holder[index].first%2==0)){
    	// 				int temp=holder[index].second;
    	// 				int val=v1[i];
    	// 				swap(v1[i],v1[holder[index].second]);
    	// 				for(int j=0;j<holder.size();j++){
    	// 					if(holder[j].first==val){
    	// 						holder[j].second=temp;
    	// 						break;
    	// 					}
    	// 				}
    	// 				holder[index].second=i;
    	// 				index++;

    	// 			}
    	// 			else if((v1[i]%2==1) && (holder[index].first%2==1)){
    	// 				int temp=holder[index].second;
    	// 				int val=v1[i];
    	// 				swap(v1[i],v1[holder[index].second]);
    	// 				for(int j=0;j<holder.size();j++){
    	// 					if(holder[j].first==val){
    	// 						holder[j].second=temp;
    	// 						break;
    	// 					}
    	// 				}
    	// 				holder[index].second=i;
    	// 				index++;
    	// 			}
    	// 			else{
    	// 				found=false;
    	// 				break;
    	// 			}
    	// 		}
    	// 		else{
    	// 			index++;
    	// 		}
    	// 		// for(auto x:v1){
    	// 		// 	cout<<x<<" ";
    	// 		// }
    	// 		// cout<<endl;
    	// 	}

    	// 	if(found){
    	// 		// for(auto x:v1){
    	// 		// 	cout<<x<<" ";
    	// 		// }
    	// 		// cout<<endl;
    	// 		cout<<"YES"<<endl;
    	// 	}
    	// 	else{
    	// 		cout<<"NO"<<endl;
    	// 	}
    	// }

    	t--;
    }

    return 0;
}