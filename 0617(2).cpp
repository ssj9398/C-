#include <iostream>
/*********개인정보 구조체**********
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
	cout << "3. I D : " << Array[i].personID << endl<<endl;
}
}

void menu()
{
	cout << "***개인정보***" << endl;
	cout << "1.개인정보추가" << endl;
	cout << "2.개인정보조회" << endl<<endl;
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
	cout << " 개인정보 추가완료" << endl<<endl;

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
*/


/******구조체를 이용한 call-by value*******
using namespace std;

typedef struct Person{
	int age;
	char name[20];
	char personID[20];
}Person;

void show(Person p)
{
	cout << "개인정보조회" << endl;
	cout << "이 름 :"<< p.name <<endl;
	cout << "나 이 :"<< p.age<< endl;
	cout << "I D :" << p.personID <<endl;
}

int main()
{
	Person man;
	cout << "이 름 :"; cin >> man.name;
	cout << "나 이 :"; cin >> man.age;
	cout << "I D :"; cin >> man.personID;

	show(man);
	return 0;

}
*/


/*********동적 메모리 할당과NULL포인터 리턴********
//#define DEBUG 1
#define DEBUG 0
using namespace std;

int main()
{
	int size;
	cout << "메모리 할당하고자 하는 배열의 크기"; cin >> size;

	int* array = new int[size];
	#if DEBUG==1
	if (array==NULL)           //#define DEBUG가 1이 아닌경우 컴파일 제외된다.
	{
		cout << "메모리 할당 실패" << endl;
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
