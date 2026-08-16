#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void)
{
	const int CARD = 3;
	const int CARD_NUMBER = 10;

	int i, hit = 0;
	int playerCard[CARD];//プレイヤーのカード
	int enemyCard[CARD];//CPUのカード
	int plyChoice[CARD];//プレイヤーの選択
	int emyChoice[CARD];//CPUの選択

	bool trunFlag = true;
	bool judgementFlag = false;
	//乱数の初期化
	srand((unsigned int)time(NULL));
	// プレイヤーとCPUに、それぞれ0～9の数字を3つランダムに配る
	for (i = 0; i < CARD; i++)
	{
		playerCard[i] = rand() % CARD_NUMBER;
		enemyCard[i] = rand() % CARD_NUMBER;
	}
	//手の確認
	cout << "===================   Hit & Blow   ============================" << "\n";
	cout << "3マスの数字あてゲームプレイヤーとCPUが、お互いに隠し持った3つの数字を当てるターン制のゲーム" << "\n";
	cout << "あなたの配られてカードは," << "\n";
	// プレイヤーが持っている3つの数字を順番に表示する
	for (i = 0; i < CARD; i++)
	{
		cout << i + 1 << "番目" << playerCard[i] << "\n";
	}
	//ゲーム開始
	cout << "===================   GAME STRAT   ============================" << "\n";
	// プレイヤーまたはCPUのどちらかが3Hitするまでゲームを繰り返す
	while (true)
	{

		if (trunFlag)
		{

			hit = 0;
			cout << "PLAYER TRUN 「数字の0から9までの数字を3つ選んでください」\n";
			// プレイヤーが3つの数字を入力する
			for (i = 0; i < CARD; i++)
			{
				while (true)
				{
					cin >> plyChoice[i];
					// 入力された数字が0未満、または9より大きい場合再度入力
					if (0 > plyChoice[i] || 9 < plyChoice[i])
					{
						cout << "入力に誤りがあります。再度入力してください。\n";
					}
					else
					{
						break;
					}

				}
			}

			// プレイヤーの予想とCPUが持っている数字を比較する
			for (i = 0; i < CARD; i++)
			{
				// 同じ位置の数字が一致している場合はHit
				if (plyChoice[i] == enemyCard[i])
				{
					cout << "Hit,";
					hit++;
				}
				else
				{
					// 数字が一致しない場合はBlowとして表示する
					cout << "Blow,";
				}
			}
			// 3つすべての数字が正しい位置だった場合、プレイヤーの勝利
			cout << "\n";
			if (hit == 3)
			{
				cout << "3Hit!!\n";
				judgementFlag = true;
				break;
			}

			cout << "\n";
			// 次はCPUのターンにする
			trunFlag = false;
		}
		else
		{
			// 前のターンのHit数をリセットする
			hit = 0;

			cout << "ENEMY TRUN \n";
			for (i = 0; i < CARD; i++)
			{
				emyChoice[i] = rand() % CARD_NUMBER;

				cout << i + 1 << "番目" << emyChoice[i] << "\n";
			}

			for (i = 0; i < CARD; i++)
			{
				if (emyChoice[i] == playerCard[i])
				{
					cout << "Hit,";
					hit++;
				}
				else
				{
					cout << "Blow,";
				}
			}
			cout << "\n";
			if (hit == 3)
			{
				cout << "3Hit!!\n";
				break;
			}

			cout << "\n";
			trunFlag = true;
		}


	}

	if (judgementFlag)
	{
		cout << "PLAYER WINNER\n";
	}
	else
	{
		cout << "ENEMY WINNER\n";
	}

	return 0;
}