
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNING
#include <iostream>
#include<string>
using namespace std;

class Building;//聲明類

//但是還是報錯,因為編譯器知道類的聲明但不知道類的結構
class GoodGuy2
{
public:
	void func(Building & bud);
};

class Building
{
	//聲明這個全局函數為building類的友元函數
	//friend void GoodGay(Building& bd);


	//聲明GoodGuy2的成員函數成為Building類的友元函數
	friend void GoodGuy2::func(Building& bud);
public:
	Building()
	{
		keting = "客廳";
		woshi = "臥室";
	}

public:
	string keting;
private:
	string woshi;

};

//void GoodGay(Building& bd)
//{
//	cout << "好雞友訪問" << bd.keting << endl;
//	cout << "好雞友訪問" << bd.woshi << endl;
//}
//void test01()
//{
//	Building m;
//	GoodGay(m);
//}


void GoodGuy2::func(Building& bud)
{
	cout << "訪問" << bud.keting << endl;
	cout << "訪問" << bud.woshi << endl;
}


void test02()
{
	Building bud;
	GoodGuy2 GF;
	GF.func(bud);
}

int main() {

	//test01();
	cout << "---" << endl;
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

/*
friend 關鍵字只出現在聲明處
其他類 類成員函數 全局函數都可聲明為友元
友元函數不是類的成員 不帶this指針
友元函數可訪問對象任意成員屬性,包括私有

注意:
友元不能被繼承
有緣關係是單向的,類A是類B的朋友,但類B不一定是類A的朋友
有緣關係不具有傳遞姓,類B是類A的朋友 類C是類B的朋友,但C不一定是類A的朋友

*/