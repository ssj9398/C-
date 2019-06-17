#include <iostream>
using namespace std;

typedef struct Person{
	int age;
	char name[20];
	char personID[20];
}Pers;

Person Array[20];
int number = 0;

void Show()
{
	for (int i=0; i < number; i++)
	{	
	cout << "개인정보" << endl;
	cout << "1. 이름 : " << Array[i].name << endl;
	cout << "2. 나이 : " << Array[i].age << endl;
	cout << "3. I D : " << Array[i].personID << endl;
}
}

void menu()
{
	cout << "1.개인정보추가" << endl;
	cout << "2.개인정보조회" << endl;
}

void add()
{
	int age;
	char name[20];
	char personID[20];
	cout << "개인 정보 추가" << endl;
	cout << "1. 이름 : "; cin>>name;
	cout << "2. 나이 : "; cin >> age;
	cout << "3. I D : "; cin >> personID;
	cout << " 개인정보 추가완료" << endl;

	strcpy_s(Array[number].name, name);
	Array[number].age, age;
	strcpy_s(Array[number].personID, personID);

	number++;
}

int main()
{
	int select;
	while (1)
	{
		menu();
		cout << "메뉴 번호 입력 :"; cin >> select;
		switch (select)
		{
		case 1:
			add();
			break;

		case 2:
			Show();
			break;
		}		
	}
		return 0;
}
