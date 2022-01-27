#include<iostream>
using namespace std;

class base1{
	public: 
	    void greet(){
	    	cout << "How Are You?" << endl;
		}
};

class base2{
	public: 
	    void greet(){
    	cout << "Kaise ho ?" << endl;
		}
};

class derived: public base1, public base2{
	    int a;
	    public: 
	      void greet(){
	      	base1::greet();
	      	base2::greet();
		  }
};


int main(){
	base1  b1;
	base2  b2;
	b1.greet();
	b2.greet();
	derived d;
	d.greet();
	return 0 ; 
}

