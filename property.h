#include <iostream>

class PROPERTY{
private:
	int length;
	int width;
	string name;
	float VpSF;

public:
	PROPERTY(){
		length = 0;
		width = 0;
		name = "n/a";
	}

	PROPERTY(string n, int l, int w){
	name = n;
	length = l;
	width = w;
	
	}

	int Area(){
		return length * width;
	}

	float Value(){
		return Area() * VpSF;
	}

	void showProperty(){
		cout << "Name - " << name << endl;
		cout << "Area - " << Area() << endl;
		cout << "Value - " << Value() << endl;
	}
};