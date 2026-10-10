#include <iostream>
#include "Game.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
	//乱数の初期化
	srand(static_cast<unsigned int>(time(nullptr)));
	cout << "Welcome to the game!" << endl;
	//Gameクラスのインスタンスを生成
	Game game;
	cout << "Game instance" << endl;
	//GameクラスのStartメソッドを呼び出す
	game.Start();
	cout << "Game ended" << endl;
	return 0;
}