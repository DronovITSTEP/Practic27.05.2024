#pragma once
#include <iostream>
using namespace std;

class Basic {
public:
	int num = 9;
	virtual int funcBasic() = 0;
};

class classA : public Basic {
public:
	virtual int funcBasic() {
		cout << "Basic A\n";
		return 0;
	}
	void Show() {
		cout << "Show\n";
	}
};
class classB : public Basic {
public:
	int funcBasic() {
		cout << "Basic B\n";
		return 0;
	}
};
class classC : public Basic {
public:
	int funcBasic() {
		cout << "Basic C\n";
		return 0;
	}
};
