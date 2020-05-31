#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a[11];
	for(int i=0;i<12;i++){
		cin>>a[i];	
	}
	int b=0;
	for(int j=11;j>0;j--){
		for(int i=0;i<j;i++){	
			if(a[i]>a[i+1]){
				b=a[i+1];
				a[i+1]=a[i];
				a[i]=b;		
			}	
		}
//		cout<<endl;
		for(int i=0;i<12;i++){
//		cout<<a[i]<<" ";
		}
	}
	for(int i=0;i<12;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
