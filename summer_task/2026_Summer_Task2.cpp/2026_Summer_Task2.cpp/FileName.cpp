#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //変数宣言
    int player;  //プレイヤーが出す手
    int cpu;     //CPUが出す手
    int result;  //結果
    int i;       //何回戦目かを数える
    int win = 0; //プレイヤーの勝利数
    int lose = 0;//プレイヤーの敗北数
    int draw = 0;//引き分け数
    //乱数の初期化
    srand((unsigned int)time(nullptr));
    //ゲーム開始
    cout << "じゃんけんゲームを開始します。" << endl;
    //5回繰り返す
    for (i = 0; i < 5; i++)
    {
        cout << endl;
        //今何回戦かの表示
        cout << "-------- " << i + 1 << "回戦 --------" << endl;

        while (true)
        {
            //手の選択
            cout << "0：グー　1：チョキ　2：パー" << endl;
            cout << "プレイヤーの手を入力してください：" << endl;

            cin >> player;

            if (player >= 0 && player <= 2)
            {
                break;
            }

            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        //CPUの手をきめる
        cpu = rand() % 3;
        // プレイヤーが選択した数字に対応する手の名前を表示する
        switch (player)
        {
        case 0:
            cout << "PLAYER：グー" << endl;
            break;

        case 1:
            cout << "PLAYER：チョキ" << endl;
            break;

        case 2:
            cout << "PLAYER：パー" << endl;
            break;
        }

        // CPUが選択した数字に対応する手の名前を表示する
        switch (cpu)
        {
        case 0:
            cout << "CPU：グー" << endl;
            break;

        case 1:
            cout << "CPU：チョキ" << endl;
            break;

        case 2:
            cout << "CPU：パー" << endl;
            break;
        }

        // プレイヤーの手とCPUの手の数字を引き算して、勝敗判定
        result = player - cpu;

        if (result == -1 || result == 2)
        {
            cout << "PLAYER WIN!" << endl;
            win++;
        }
        else if (result == 0)
        {
            cout << "DRAW" << endl;
            draw++;
        }
        else
        {
            cout << "CPU WIN!" << endl;
            lose++;
        }
    }

    // 5回のじゃんけんが終了したことを表示する
    cout << endl;
    cout << "==============================" << endl;
    cout << "5回勝負終了！" << endl;
    cout << win << "勝 "
        << draw << "分 "
        << lose << "敗" << endl;
    cout << "==============================" << endl;

    return 0;
}