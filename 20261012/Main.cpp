#include<iostream>
#include"Boss.h"
#include"Enemy.h"
#include"Player.h"

using namespace std;
int main(void)
{
	//コンストラクタ
	/*Character character("提婆達多");
	cout << character.GetName() << endl;

	character.Attack();*/

	string playerName;
	string enemyName;
	string BossName;

	cout << "名前を入力してください" << endl;
	cout << "勇者" << endl;
	cin >> playerName;
	cout << "敵" << endl;
	cin >> enemyName;
	cout << "ボス" << endl;
	cin >> BossName;

	//コンストラクタ
	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(BossName);

	cout << "勇者の名前:" << player.GetName() << endl;

	cout << "敵の名前:" << enemy.GetName() << endl;

	cout << "ボスの名前:" << boss.GetName() << endl;


	player.Attack();

	enemy.Attack();

	boss.Attack();



	return 0;
}