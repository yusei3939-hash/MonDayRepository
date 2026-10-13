#include<iostream>
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
#include "BattleManager.h"
#include"Wizard.h"
int main(void)
{
	//コンストラクタ
	Player player("勇者ヨシヒコ");
	Enemy enemy("スライム");
	Boss boss("魔王");
	Wizard wizard("魔法使い");
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);
	manager.StartBattle(&wizard);

	return 0;
}
