#include <iostream>
/*********�������� ����ü**********
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
	cout << "3. I D : " << Array[i].personID << endl<<endl;
}
}

void menu()
{
	cout << "***��������***" << endl;
	cout << "1.���������߰�" << endl;
	cout << "2.����������ȸ" << endl<<endl;
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
	cout << " �������� �߰��Ϸ�" << endl<<endl;

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
*/


/******����ü�� �̿��� call-by value*******
using namespace std;

typedef struct Person{
	int age;
	char name[20];
	char personID[20];
}Person;

void show(Person p)
{
	cout << "����������ȸ" << endl;
	cout << "�� �� :"<< p.name <<endl;
	cout << "�� �� :"<< p.age<< endl;
	cout << "I D :" << p.personID <<endl;
}

int main()
{
	Person man;
	cout << "�� �� :"; cin >> man.name;
	cout << "�� �� :"; cin >> man.age;
	cout << "I D :"; cin >> man.personID;

	show(man);
	return 0;

}
*/


/*********���� �޸� �Ҵ��NULL������ ����********
//#define DEBUG 1
#define DEBUG 0
using namespace std;

int main()
{
	int size;
	cout << "�޸� �Ҵ��ϰ��� �ϴ� �迭�� ũ��"; cin >> size;

	int* array = new int[size];
	#if DEBUG==1
	if (array==NULL)           //#define DEBUG�� 1�� �ƴѰ�� ������ ���ܵȴ�.
	{
		cout << "�޸� �Ҵ� ����" << endl;
		return -1;
	}
	#endif
	for (int i = 0; i < size; i++)
	
		array[i] = i + 0;
	
	for (int j = 0; j < size; j++)
	
		cout << "arr[" << j << "]" << array[j] << endl;

		delete[]array;
		return 0;
}
*/