#include<iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;//포인터 변수 선언 후 num의 메모리 주소를 포인터 변수에 저장.(포인터는 주소를 저장) &를 앞에 둔 것으로 주소를 의미한다.
	int** dptr = &ptr;//더블포인터도 가능.(포인터의 주소를 저장)

	int& ref = num;
	int* (&pref) = ptr;//포인터에도 참조자를 붙일 수 있다. 참조자 선언 시에 참조자 앞에는 &가 붙는데, 포인터의 성격이 있다면 괄호를 치고 그 앞에 *를 붙여야 한다.
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}