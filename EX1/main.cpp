#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Original{
	public:
		Original(string a,string b,string c,int d,int e){
			model=a;CC=b;engine=c;price=d;tire=e;
		}
	private:
		string model,CC,engine;
		int price,tire;

};
class Car:public Original{
	public:
		Car(string a,string b,string c,int d,int e,int f):Original(a,b,c,d,e){
			people=f;
		}
		double tax();	
		double km();
		void setPeople();
	private:
		int people;
};
class Mortorcycle:public Original{
	public:
		Mortorcycle(string a,string b,string c,int d,int e,string f):Original(a,b,c,d,e){
			shape=f;
		}
		double tax();	
		double km();
		void setShape();
	private:

		string shape;
};

int main(int argc, char** argv) {
	string a,b,c,g;int d, e,f;
	Car car(a,b,c,d,e,f);
	Mortorcycle mortorcycle(a,b,c,d,e,g);
	return 0;
}
