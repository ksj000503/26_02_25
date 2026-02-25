#include <iostream>

using namespace std;

int main()
{
	int First = 0;
	int Second = 0;
	
	cin >> First ;
	cin >> Second ;

	cout << First + Second - First * Second / First % Second << endl;
	
	return 0;
}