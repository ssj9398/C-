#include <iostream>

using namespace std;
/*=======아무수나 입력하면 그수가 +or- 구분===========
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
	cout << "수 입력";  cin >> a;
	int b;
	cout << "수 입력";  cin >> b;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b);
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	/*=================Reference=====================
	int a;
	cout << "아무수나 입력 : ";   cin >> a;
	
	int &b = a;
	
	a++;
	cout << "b : " << b << endl;
	cout << "a : " << a << endl;

	b++;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	*/


	/*=======아무수나 입력하면 그수가 +or- 구분===========
	int num;
	bool result;
	cout << "수 입력" << endl;  cin >> num;
	result = IsPositive(num);
	if (result == true)
		cout << "Positive Number" << endl;
	else
		cout << "Nagative Number" << endl;
	*/
	return 0;

}
