#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a[9];
	int odd[4];
	int even[4];
	int count=0;
	int count2=0;
	for(int i=0;i<10;i++){
		a[i]=i;
		
		if(a[i]%2==0){
			even[count2]=a[i];
//			cout<<even[count2]<<" ";
			count2++;
		}
		else{
			odd[count]=a[i];
//			cout<<odd[count]<<" ";
			count++;
		}
	}
	count=0;
	count2=0;
	for(int i=0;i<5;i++){
		count=count+odd[i];
		count2=count2+even[i];
//		cout<<count<<" ";
	}
	cout<<count2-count<<endl;
	for(int i=0;i<5;i++){
		cout<<odd[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<even[i]<<" ";
	}	
	return 0;
}
