#include <iostream>

using namespace std;

int main()
{
	// Array = 메모리의 제일 앞의 값
	
	// 배열
	// Array[0] -> 000011a3bfc2 + 0
	// [0][][][][][][][][][9]
	
	// 2D 배열
	// Array[4][4] // [칸수][줄수]
	// [0][][][3]
	// [0][][][3]
	// [0][][][3]
	// [0][][][3]

	// int Array[10] = { 0, };
	// bool - true or false, b~
	// 1byte 공간에 참이나 거짓이냐만 저장함
	bool End = true; // or false;
	if (End) // true
	{
		cout << "A" << endl;
	}
	else // false
	{
		cout << "B" << endl;
	}
	// int : 정수, 2^32
	// bool : ture, false, 1바이트

	// for문
	// 사실상 for문은 배열에만 씀

	// bool Result = 10 > 100;
	// 0만 거짓, 나머지 모두 참
	// 비교 연산자 >, <, <=, >=, !=, ==

	int Array[10];
	for (int i = 0; i < 10; i++ ) //(초기치, 조건(없으면 true로 봄, 증강치)
	{
		Array[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	
	bool Result1 = true;
	bool Result2 = false;
	
	// 연산자 우선 순위, 산술, 논리, 비교
	// () 첫번째

	// and 둘다 참이면
	if (Result1 && Result2)
	{
		cout << "안녕" << endl;
	}
	// or 두 조건 중 하나만 참이면
	if (Result1 || Result2)
	{
		cout << "안녕2" << endl;
	}
	// not 두 조건 중 하나만 거짓이면
	if (!Result1)
	{
		cout << "안녕3" << endl;
	}
	
	// char
	// 아스키 코드로 저장 'A'=65로 저장하지만
	// cout 등으로 불러올땐 A로 표현
	char Temp = 'A';
	// chat Temp = 'A' + 1;
	// 저장시 65+1 =66
	// 출력시 아스키코드가 66인 B 출력

	//float
	float A = 1.0f;

	
	
	
	
	
	
	
	return 0;
	
	
}