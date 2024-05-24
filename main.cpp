#include <iostream>
#include <vector> //Data 저장, Container, STL

using namespace std;

//function overloading
//name mangling
//float Add(float A, float B)
//{
//	return A + B;
//}
//
//int Add(int A, int B)
//{
//	return A + B;
//}

//template 함수
//메타프로그래밍
//Compile 시 생성 형태에 맞게
//template<typename T, typename Y>
//T Add(T A, Y B)
//{
//	return A + B;
//}
//
//int main()
//{
//	cout << Add<int, int>(1, 2) << endl;
//	cout << Add<float, float>(3.0f, 2.2f) << endl;
//	cout << Add<int, float>(1, 2.2f) << endl;
//	cout << Add<int, char>(1, 2.2f) << endl;
//}
//class IntArray
//{
//public:
//	int Data[10];
//};
//
//class FloatArray
//{
//public:
//	float Data[10];
//};

//template<typename T>
//class Array
//{
//public:
//	T Data[10];
//};
//
//int main()
//{
//	Array<int> Number1;
//	Array<float> Number2;
//	Array<string> Number3;
//	Array<bool> Number4;
//	Array<char> Number5;
//
//	return 0;
//}

#include "Player.h"
#include "Monster.h"



int main()
{
	vector<Monster*> MyMonstyer;
	Player* MyPlayer = new Player();
	while (true)
	{
		string Key;
		cin >> Key;
		if (Key == "1")
		{
			MyMonstyer.push_back(new Monster());
		}

		MyPlayer->Move();

		for (int i = 0; i < MyMonstyer.size(); ++i)
		{
			MyMonstyer[i]->Move();
			MyMonstyer[i]->Attack();
		}
	}


	delete MyPlayer;
	for (int i = 0; i < MyMonstyer.size(); ++i)
	{
		delete MyMonstyer[i];
	}

	MyMonstyer.clear();

	return 0;
}
