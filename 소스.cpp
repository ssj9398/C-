#include <iostream>

using namespace std;
/*=======�ƹ����� �Է��ϸ� �׼��� +or- ����===========
bool IsPositive(int i)
{
	if (i > 0)
		return true;
	else
		return false;
}
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	}
int main()
{
	int a;
	cout << "�� �Է�";  cin >> a;
	int b;
	cout << "�� �Է�";  cin >> b;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b);
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	/*=================Reference=====================
	int a;
	cout << "�ƹ����� �Է� : ";   cin >> a;
	
	int &b = a;
	
	a++;
	cout << "b : " << b << endl;
	cout << "a : " << a << endl;

	b++;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	*/


	/*=======�ƹ����� �Է��ϸ� �׼��� +or- ����===========
	int num;
	bool result;
	cout << "�� �Է�" << endl;  cin >> num;
	result = IsPositive(num);
	if (result == true)
		cout << "Positive Number" << endl;
	else
		cout << "Nagative Number" << endl;
	*/
	return 0;

}