#include <iostream>
#include "stdlib.h"
#include "stdio.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string ToFull(string str)
{
 std::string result = "";  
 unsigned char tmp; unsigned char tmp1;  
 for (unsigned int i = 0; i < str.length(); i++)
 {  
  tmp = str[i];  
  tmp1 = str[i + 1];  
  //cout << "uchar:" << (int) tmp << endl;  
  if (tmp>32 && tmp<128)
  {//�O�b�Φr��
   result += 163;//�Ĥ@�Ӧ줸�ճ]�w��163
   result += (unsigned char)str[i]+128;//�ĤG�Ӧ줸��+128;  
  }
  else if (tmp >= 163)
  {//�O���Φr��  
   result += str.substr(i, 2);  
   i++;  
   continue;  
  }
  else if (tmp == 32)
  {//�B�z�b�ΪŮ�  
   result += 161; 
   result += 161; 
  }
  else
  {  
   result += str.substr(i, 2);  
   i++;
  }
 }
 return result;  
}
int main(int argc, char** argv) {
	string word;
	getline(cin,word);
	int a,b;
	for (int i = 0; i < word.length(); i++){
			
			if(word[i]==':'){
//			cout<<ToFull(word[i]);
				a=i;
			}
			if(word[i]==' '){
				if(word[i+1]!='-'){
					word.erase(i-1, 1);
				}else{
					b=i+1;
					break;
				} 
			}
			
	}
	
	cout<<word<<endl;
	cout<<word.substr(a+1,b-a)<<endl;

	
	return 0;
}
