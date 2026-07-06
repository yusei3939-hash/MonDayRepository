#include"20260706_Config1_murata.h"
#include"20260706_Header1_murata.h"
#include<iostream>
//回復
void Heal(int& hp)
{
	//HP回復
	hp += 20;
	//表示
	std::cout << "20回復しました。\n";
}
//入力チェック
int InputCheck(int min, int max)
{
	//変数宣言
	int num;
	//入力チェック
	while (true)
	{
		//数字の入力
		std::cin >> num;
		//入力が間違っているかどうかを判断
		if (min > num || max < num)
		{
			//間違っていたら再度入力を促す
			std::cout << "入力に誤りがあります。再度入力してください。\n";
		}
		else
		{
			//ループから抜ける
			break;
		}
		return num;
	}
}

void Run()
{
	//変数宣言
	int playerHp = ConstNumber::PLAYER_HP;
	int select;

	std::cout << "HPを回復させますか？\n→回復\n2→現状のまま\n";
	//選択
	std::cout << "選択してください\n";
	select = InputCheck(ConstNumber::SELECT_MIN, ConstNumber::SELECT_MAX);
	//回避
	if (select == 1)
	{
		Heal(playerHp);
	}
	else
	{
		std::cout << "回復しませんでした\n";
	}
	//HP表示
	std::cout << "playerのHPは、" << playerHp << "です\n";
}