#include "VendingManchine.h"
#include <iostream>
using namespace std;

VendingManchine::VendingManchine()
{
	money = 0;
	colaStock = 15;
}
//お金を入れる
void VendingManchine::insertMoney(int amount)
{
	if (amount > 0)
	{
		money += amount;
	}

}
//コーラを買う
void VendingManchine::buyCola()
{
	const int price = 180;
	if (money >= price && colaStock > 0)
	{
		money -= price;
		colaStock--;
		cout << "コカ・コーラを購入しました。\n";
	}
	else
	{
		cout << "購入できませんでした。\n";
	}

}
//残りのお金を取得
int VendingManchine::getMoney() const {
	return money;
}
//在庫を取得する
int VendingManchine::getColaStock() const {
	return colaStock;
}