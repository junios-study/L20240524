#include <iostream>

using namespace std;

int main()
{
	int Size = 3;

	int* PA = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		PA[i] = i + 1;
	}
	
	srand(time(0));
	int NewPosition = rand() % Size;
	int NewValue = rand() % 100 + 100; //100 ~ 199

	//�״�� �ű�°�
	int* NewPA = new int[Size+1];
	for (int i = 0; i < NewPosition; ++i)
	{
		NewPA[i] = PA[i];
	}

	//�߰� ����
	NewPA[NewPosition] = NewValue;

	//��ĭ�� �о �ű��
	for (int i = NewPosition + 1; i < Size + 1; ++i)
	{
		NewPA[i] = PA[i - 1];
	}

	delete[] PA;
	PA = NewPA;
	NewPA = nullptr;

	for (int i = 0; i < Size + 1; ++i)
	{
		cout << PA[i] << ", ";
	}

	

	delete[] NewPA;

	return 0;
}