#include <iostream>
/*
using std::cout;
using std::endl;
using std::cin;
*/
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
const int name_LENGTH = 20;
/* ===========swap 함수===============
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
/*=============직육면체 크기공식 함수==========
int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
*/
/*=================inline 매크로?=============
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
		std::cout << "피카츄" << std::endl;
	}
}
namespace B_COM
{
	void function(void)
	{
		std::cout << "라이츄" << std::endl;
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

	/*=========기본 출력==================
	std::cout << "hi" << std::endl;   //기본 출력문
	int a, b;
	cout << "입력" << endl;  //<<endl을 붙이면 \n과 같은 효과로 한줄이 내려가서 입력 되게 된다.
	cin >> a;        //c언어의 scanf와 동일한 역할 a에 수 입력
	cout << "입력" ;  //위와 동일
	cin >> b;        //b에 수 입력
	int result = a + b;
	cout << "총 합"<<result << endl;         //총합이라는 문자열을 출력하고 그 뒤에 result의 값을 넣는다.
	*/


	/*==========입력받은 두수의 합=================
	int a, b;
	int result = 0;
	cout << "입력 : ";         //출력문
	cin >> a >> b;				//a, b 입력

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

	cout << "두수의 합은" <<result <<endl;
	*/


	/*==========================
	char name[10];
	char lang[20];
	cout << "이름은 : ";
	cin >> name;
	cout << "favorit lang :";
	cin >> lang;

	cout << " 이름 : " << name << endl;
	cout << "언어 : " << lang << endl;
	*/


	/*======= 입력 받은 10개의 수 총합구하기==========
	int q, w, e, r, a, s, d, f, z, x, sum ;
	cin >> q >> w >> e >> r >> a >> s >> d >> f >> z >> x;
	cout << "총합 : ";
	sum = q + w + e + r + a + s + d + f + z + x;
	cout << sum << endl;
	*/

	/*===== 구구단2~9==========
	int num;
	int sum = 0;
	cout << "하나의 수 입력";
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


	/* =======swap 함수============
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'a', ch2 = 'z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;
	*/


	/*=======직육면체 크기 구하기=====
	int a, b, c;
	cout << "정수 세자리 입력" << endl;
	cin >> a >> b >> c;
	cout << "직육면체의 크기는";
	cout << BoxVolume(a, b, c) <<"cm"<< endl;
	*/


	/*=================inline 매크로?=============
	int num;
	cin >> num;
	
		cout << SQUARE(num) << endl;
	*/


	/*=========namespace=============
	A_COM::function();
	B_COM::function();
	*/

cout << "은행계좌 관리 프로그램" << endl;
int choice;
while (1)
{
	menu();
	cout << "메뉴 선택 : "; cin >> choice;

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
	cout << "====1.계좌 개설====" << endl;
	cout << "====2.입금====" << endl;
	cout << "====3.출금====" << endl;
	cout << "====4.잔액 조회====" << endl;
	cout << "====5.프로그램 종료====" << endl<<endl;
}

void MakeBank()
{
	int id;
	char name[name_LENGTH];
	int balance;

	cout << "===계좌개설===" << endl;
	cout << "계좌 ID :"; cin >> id;
	cout << "이 름 :"; cin >> name;
	cout << "입금액 :"; cin >> balance;

	Array[index].id=id;
	strcpy_s(Array[index].name, name);
	Array[index].balance = balance;
	

	index++;
}

void Deposit()
{
	int money;
	int id;

	cout << "계좌 ID"; cin >> id;
	cout << "입금액 :"; cin >> money;

	for (int i = 0; i < index; i++)
	{
		if (Array[i].id == id)
		{
			Array[i].balance += money;
			cout << "입금 완료" << endl;
			return;
		}
	}
	cout << "없는 ID입니다." << endl;
}

void Withdraw()
{
	int money;
	int id;
	
	cout << "계좌 ID : "; cin >> id;      
	cout << "찾을 금액 :"; cin >> money;

	for (int i = 0; i < index; i++)
	{
		if (Array[i].balance == money)
		{
			if (Array[i].balance < money)
			{
				cout << "잔액 부족" << "endl";
			}
			Array[i].balance -= money;
			cout << "출금 완료" << endl;
			return;
		}
	}
	cout << "없는 ID입니다." << endl;
}

void Inquire()
{
	for (int i = 0; i < index; i++)
	{
		cout << "계좌 ID :" << Array[i].id << endl;
		cout << "금액 :" << Array[i].balance << endl;
		cout << "이름 :" << Array[i].name << endl;
	}
}
