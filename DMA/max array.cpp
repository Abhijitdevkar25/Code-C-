#include<iostream>
using namespace std;
int main(){
	int i,max;
	int a[5]={1,2,3,4,5};
	
	max=a[0];
	for(i=1;i<=4;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout << "Max : "<< max;
}
