#include<iostream>
using namespace std;

int main(void)
{
	//”z—ñ
	int numbers[5] = { 10,20,30,40,50 };
	int* pNum;

	//pAry‚Í”z—ñ‚Ìæ“ª‚ğw‚·
	pNum = numbers;
	for (int i = 0; i < 5; i++)
	{
		cout << "&number[" << i << "]:" << pNum << endl;
		cout << "pNum:" << pNum + i << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cin >> *(pNum + i);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "Number:[" << i << "]:" << *(pNum + i) << endl;
	}

	return 0;
}