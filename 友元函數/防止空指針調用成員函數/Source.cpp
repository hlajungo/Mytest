
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNING
#include <iostream>
#include<string>
using namespace std;

class Maker
{
public:
	Maker() 
	{
		a = 20;
	}
	~Maker();

	void printMaker()
	{
		if (this == NULL)
		{
			cout << "this == NULL" << endl;
			return;
		}
		cout << "a=" << a << endl;//這裡的a 實際上是 this->a;
	}
private:
	int a;
};



void test01()
{
	Maker* m = NULL;
	m->printMaker();
}

int main() {

	test01();
	
	system("pause");
	return EXIT_SUCCESS;
}

