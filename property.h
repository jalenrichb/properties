#include <iostream>

class PROPERTY{
private:
	int length;
	int width;
	string name;

public:
	PROPERTY()
		length = 0;
		width = 0;
		name = "n/a";

	PROPERTY(string n, int l, int w){
	name = n;
	length = l;
	width = w;
	
	}
};

