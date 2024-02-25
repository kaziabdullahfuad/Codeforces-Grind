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
void merge(int arr[],int low,int mid,int high){

	debug(low);
	debug(mid)
	debug(high)
	cout<<mid-low+1<<endl;
	cout<<high-mid<<endl;
	int left_size=mid-low+1;
	int right_size=high-mid;

	int left_arr[left_size];
	int right_arr[right_size];
	
	for(int i=low,j=0;i<=mid;i++,j++){

		left_arr[j]=arr[i];
		//cout<<arr[i]<<" ";
	}

	for(int i=mid+1,j=0;i<=high;i++,j++){

		right_arr[j]=arr[i];
	}

	for(int i=0;i<left_size;i++){

		cout<<"VALUES "<<left_arr[i]<<" ";
	}
	cout<<endl;

	for(int i=0;i<right_size;i++){

		cout<<"VALUES "<<right_arr[i]<<" ";
	}
	cout<<endl;

	int left=0;
	int right=0;
	int index=low;
	while(left<left_size && right<right_size){

		if(left_arr[left]<right_arr[right]){

			arr[index]=left_arr[left];
			left++;
			index++;
		}
		else{

			arr[index]=right_arr[right];
			right++;
			index++;

		}
	}


	while(left<left_size){

		arr[index]=left_arr[left];
		left++;
		index++;
	}

	while(right<right_size){

		arr[index]=right_arr[right];
		right++;
		index++;
	}

	cout<<"PRINTING VALUE"<<endl;
	for(int i=low;i<=high;i++){

		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
void mergeSort(int arr[],int low,int high){

	if(low>=high){
		return;
	}

	int mid=(low+high)/2;

	mergeSort(arr,low,mid);

	mergeSort(arr,mid+1,high);
	// debug(low)
	// debug(mid)
	// debug(high)

	merge(arr,low,mid,high);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int arr[]={8, 4, 2, 1};

    int arr[]={1,20,6,4,5};

    //cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<len<<endl;

    for(int i=0;i<len;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr,0,len-1);

    cout<<"AFTER SORTING"<<endl;

    for(int i=0;i<len;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}