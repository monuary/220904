#include<iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;//������ ���� ���� �� num�� �޸� �ּҸ� ������ ������ ����.(�����ʹ� �ּҸ� ����) &�� �տ� �� ������ �ּҸ� �ǹ��Ѵ�.
	int** dptr = &ptr;//���������͵� ����.(�������� �ּҸ� ����)

	int& ref = num;
	int* (&pref) = ptr;//�����Ϳ��� �����ڸ� ���� �� �ִ�. ������ ���� �ÿ� ������ �տ��� &�� �ٴµ�, �������� ������ �ִٸ� ��ȣ�� ġ�� �� �տ� *�� �ٿ��� �Ѵ�.
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}