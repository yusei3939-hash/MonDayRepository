#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"

void PitingType(int piting)
{

	switch (piting)
	{
	case 0:
		//0を選んだら
		cout << "ストレートを投げました" << endl;
		break;
	case 1:
		//１を選んだら
		cout << "カーブを投げました" << endl;
		break;
	case 2:
		//２を選んだら
		cout << "スライダーを投げました" << endl;
		break;
	case 3:
		//３を選んだなら
		cout << "シンカーを投げました" << endl;
		break;

	}
}

//結果
void Result(int out)
{
	//OUTが３より多ければ
	if (out >= 3)
	{
		cout << "PLAYER WINNER!!" << endl;
	}
	else
	{
		cout << "CPU WINNER!!" << endl;
	}
}