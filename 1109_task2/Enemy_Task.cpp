
#include "Enemy_task.h"
#include<iostream>

//コンストラクタ
Enemy_task::Enemy_task(const std::string& name) :Name(name), hp(100)
{
	std::cout << name << "が出現しました。\n";
}

//デストラクタ
Enemy_task::~Enemy_task()
{
	std::cout << Name << "を破棄しました。。\n";
}

//HPを取得
int Enemy_task::GetHp() const
{
	return hp;
}

void Enemy_task::Draw() const
{
	std::cout << "名前:" << Name << std::endl;
	std::cout << "HP:" << hp << std::endl;
}