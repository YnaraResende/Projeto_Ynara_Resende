#include <iostream>

using namespace std;

class A{
	private:
		int A1;
		float A2;

	public:
		int getA1(){
			return A1;
		}
	
		float getA2(){
			return A2;
		}
	
		void setA1(int _A1){
			A1 = _A1;
		}
	
		void setA2(float _A2){
			A2 = _A2;
		}
	
		void MA1(){
			cout<<"MA1"<<endl;
		}
	
		void MA2(){
			cout <<"MA2"<<endl;
		}
		
		void MA3(){
			cout<< "MA3" << endl;
		}
};
