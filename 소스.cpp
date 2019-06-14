#include <iostream>
/*
using std::cout;
using std::endl;
using std::cin;
*/
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
const int name_LENGTH = 20;
/* ===========swap �Լ�===============
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap(char *a, char *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
*/
/*=============������ü ũ����� �Լ�==========
int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
*/
/*=================inline ��ũ��?=============
inline int SQUARE(int x)
{
	return x*x;
}
*/
/* ======namespace
namespace A_COM
{
	void function(void)
	{
		std::cout << "��ī��" << std::endl;
	}
}
namespace B_COM
{
	void function(void)
	{
		std::cout << "������" << std::endl;
	}
}*/
typedef struct _BANK
{
	int id;
	int balance;
	char name[name_LENGTH];
}BANK;

BANK Array[20];
int index = 0;

void menu();
void MakeBank();
void Deposit();
void Withdraw();
void Inquire();
enum{ MAKE, DEPOSIT, WITHDRAW, INQUIRE, EXIT  };
int main(void)
{

	/*=========�⺻ ���==================
	std::cout << "hi" << std::endl;   //�⺻ ��¹�
	int a, b;
	cout << "�Է�" << endl;  //<<endl�� ���̸� \n�� ���� ȿ���� ������ �������� �Է� �ǰ� �ȴ�.
	cin >> a;        //c����� scanf�� ������ ���� a�� �� �Է�
	cout << "�Է�" ;  //���� ����
	cin >> b;        //b�� �� �Է�
	int result = a + b;
	cout << "�� ��"<<result << endl;         //�����̶�� ���ڿ��� ����ϰ� �� �ڿ� result�� ���� �ִ´�.
	*/


	/*==========�Է¹��� �μ��� ��=================
	int a, b;
	int result = 0;
	cout << "�Է� : ";         //��¹�
	cin >> a >> b;				//a, b �Է�

	if (a < b)
	{
		for (int i = a + 1; i < b; i++)
			result += i;
	}
	else
	{
		for (int i = b + 1; i < a; i++)
			result += i;
	}

	cout << "�μ��� ����" <<result <<endl;
	*/


	/*==========================
	char name[10];
	char lang[20];
	cout << "�̸��� : ";
	cin >> name;
	cout << "favorit lang :";
	cin >> lang;

	cout << " �̸� : " << name << endl;
	cout << "��� : " << lang << endl;
	*/


	/*======= �Է� ���� 10���� �� ���ձ��ϱ�==========
	int q, w, e, r, a, s, d, f, z, x, sum ;
	cin >> q >> w >> e >> r >> a >> s >> d >> f >> z >> x;
	cout << "���� : ";
	sum = q + w + e + r + a + s + d + f + z + x;
	cout << sum << endl;
	*/

	/*===== ������2~9==========
	int num;
	int sum = 0;
	cout << "�ϳ��� �� �Է�";
	cin >> num;
	for (int i = 1; i < 10; i++)
	{
		if (num == i)
		{
			for (int i = 1; i < 10; i++)
			{
				cout << num << "*" << i << " = " << num*i << endl;
			}
		}
	}
	*/


	/* =======swap �Լ�============
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'a', ch2 = 'z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;
	*/


	/*=======������ü ũ�� ���ϱ�=====
	int a, b, c;
	cout << "���� ���ڸ� �Է�" << endl;
	cin >> a >> b >> c;
	cout << "������ü�� ũ���";
	cout << BoxVolume(a, b, c) <<"cm"<< endl;
	*/


	/*=================inline ��ũ��?=============
	int num;
	cin >> num;
	
		cout << SQUARE(num) << endl;
	*/


	/*=========namespace=============
	A_COM::function();
	B_COM::function();
	*/

cout << "������� ���� ���α׷�" << endl;
int choice;
while (1)
{
	menu();
	cout << "�޴� ���� : "; cin >> choice;

	switch (choice)
	{
	case 1:
		MakeBank();
		break;

	case 2:
		Deposit();
		break;

	case 3:
		Withdraw();
		break;

	case 4:
		Inquire();
		break;

	case 5:
		return 0;
		break;

	default :
		cout << "select number from 1 to 5 " << endl;
		break;
		
	}
}
}

void menu()
{
	cout << "==========MENU==========" << endl;
	cout << "====1.���� ����====" << endl;
	cout << "====2.�Ա�====" << endl;
	cout << "====3.���====" << endl;
	cout << "====4.�ܾ� ��ȸ====" << endl;
	cout << "====5.���α׷� ����====" << endl<<endl;
}

void MakeBank()
{
	int id;
	char name[name_LENGTH];
	int balance;

	cout << "===���°���===" << endl;
	cout << "���� ID :"; cin >> id;
	cout << "�� �� :"; cin >> name;
	cout << "�Աݾ� :"; cin >> balance;

	Array[index].id=id;
	strcpy_s(Array[index].name, name);
	Array[index].balance = balance;
	

	index++;
}

void Deposit()
{
	int money;
	int id;

	cout << "���� ID"; cin >> id;
	cout << "�Աݾ� :"; cin >> money;

	for (int i = 0; i < index; i++)
	{
		if (Array[i].id == id)
		{
			Array[i].balance += money;
			cout << "�Ա� �Ϸ�" << endl;
			return;
		}
	}
	cout << "���� ID�Դϴ�." << endl;
}

void Withdraw()
{
	int money;
	int id;
	
	cout << "���� ID : "; cin >> id;      
	cout << "ã�� �ݾ� :"; cin >> money;

	for (int i = 0; i < index; i++)
	{
		if (Array[i].balance == money)
		{
			if (Array[i].balance < money)
			{
				cout << "�ܾ� ����" << "endl";
			}
			Array[i].balance -= money;
			cout << "��� �Ϸ�" << endl;
			return;
		}
	}
	cout << "���� ID�Դϴ�." << endl;
}

void Inquire()
{
	for (int i = 0; i < index; i++)
	{
		cout << "���� ID :" << Array[i].id << endl;
		cout << "�ݾ� :" << Array[i].balance << endl;
		cout << "�̸� :" << Array[i].name << endl;
	}
}
