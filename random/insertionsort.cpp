#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
void printArray(int arr[],int n){

	for(int i=0;i<n;i++){

		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
// wrong way
// void InserSort(int arr[],int n){

// 	for(int i=1;i<n;i++){

// 		for(int j=i;j>=1;j--){

// 			if(arr[j]<arr[j-1]){

// 				swap(arr[j],arr[j-1]);
// 			}
// 		}
// 		printArray(arr,n);
// 	}
// }
void InserSort(int arr[],int n){

	int i,j,key;

	for(i=1;i<n;i++){
		
		key=arr[i];
		j=i-1;

		while(j>=0 && arr[j]>key){

			arr[j+1]=arr[j];

			j--;
		}

		arr[j+1]=key;

		printArray(arr,n); 
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5]={12,11,13,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<n<<endl;

    InserSort(arr,n);

    printArray(arr,n);


    return 0;
}