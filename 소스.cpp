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
	cout << "��������" << endl;
	cout << "1. �̸� : " << Array[i].name << endl;
	cout << "2. ���� : " << Array[i].age << endl;
	cout << "3. I D : " << Array[i].personID << endl;
}
}

void menu()
{
	cout << "1.���������߰�" << endl;
	cout << "2.����������ȸ" << endl;
}

void add()
{
	int age;
	char name[20];
	char personID[20];
	cout << "���� ���� �߰�" << endl;
	cout << "1. �̸� : "; cin>>name;
	cout << "2. ���� : "; cin >> age;
	cout << "3. I D : "; cin >> personID;
	cout << " �������� �߰��Ϸ�" << endl;

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
		cout << "�޴� ��ȣ �Է� :"; cin >> select;
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