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
  {//是半形字元
   result += 163;//第一個位元組設定為163
   result += (unsigned char)str[i]+128;//第二個位元組+128;  
  }
  else if (tmp >= 163)
  {//是全形字元  
   result += str.substr(i, 2);  
   i++;  
   continue;  
  }
  else if (tmp == 32)
  {//處理半形空格  
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
