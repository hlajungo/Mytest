
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNING
#include <iostream>
#include<string>
using namespace std;

class Building;//�n����

//���O�٬O����,�]���sĶ�����D�����n���������D�������c
class GoodGuy2
{
public:
	void func(Building & bud);
};

class Building
{
	//�n���o�ӥ�����Ƭ�building�����ͤ����
	//friend void GoodGay(Building& bd);


	//�n��GoodGuy2��������Ʀ���Building�����ͤ����
	friend void GoodGuy2::func(Building& bud);
public:
	Building()
	{
		keting = "���U";
		woshi = "�׫�";
	}

public:
	string keting;
private:
	string woshi;

};

//void GoodGay(Building& bd)
//{
//	cout << "�n���ͳX��" << bd.keting << endl;
//	cout << "�n���ͳX��" << bd.woshi << endl;
//}
//void test01()
//{
//	Building m;
//	GoodGay(m);
//}


void GoodGuy2::func(Building& bud)
{
	cout << "�X��" << bud.keting << endl;
	cout << "�X��" << bud.woshi << endl;
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
friend ����r�u�X�{�b�n���B
��L�� ��������� ������Ƴ��i�n�����ͤ�
�ͤ���Ƥ��O�������� ���athis���w
�ͤ���ƥi�X�ݹ�H���N�����ݩ�,�]�A�p��

�`�N:
�ͤ�����Q�~��
���t���Y�O��V��,��A�O��B���B��,����B���@�w�O��A���B��
���t���Y���㦳�ǻ��m,��B�O��A���B�� ��C�O��B���B��,��C���@�w�O��A���B��

*/