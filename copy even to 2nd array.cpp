#include<iostream>
using namespace std;
int main(){
	int i, j;
	int arr[5]={1,2,3,4,5};
	int arr1[5];
	
	for(i=0, j=0 ;i<5, j<5 ;i++){
		if(arr[i] % 2 == 0)
		{
			arr1[j]=arr[i];
			j++;
		}
	}
	cout<<"First Array is: "<<endl;
	for(i=0;i<5;i++){
		cout<<arr[i]<< "  ";
	}
	cout<<"\nCopied array is: "<<endl;
	i=0;
	while(arr1[i] >0)
	{
		cout << arr1[i] << "  ";
		i++;
	}
	return 0;
}
