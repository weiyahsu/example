#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a[11];
	int b[9];
	int c[9];
	int d[9];
	int e[20];
	for(int i=0;i<12;i++){
		cin>>a[i];
	}

	for(int i=0;i<10;i++){
		b[i]=i;
	}
	for(int i=0;i<10;i++){
		e[i]=b[i];
	} 
	int count=0;
	int count2=0;
	int count3=10;
	for(int i=0;i<12;i++){
		for(int j=0;j<10;j++){
			if(a[i]==b[j]){
				c[count]=a[i];
				cout<<c[count]<<"  ";
				count++;
				break;
			}
			else{
				if(j==9){
					d[count2]=a[i];
					count2++;
					e[count3]=a[i];
					count3++;
				}
			}
		}
	}
	cout<<endl;
	for(int i=0;i<count2;i++){
		cout<<d[i]<<"  ";
	}
	cout<<endl;
	for(int i=0;i<count3;i++){
		cout<<e[i]<<"  ";
	}

	
	return 0;
}
