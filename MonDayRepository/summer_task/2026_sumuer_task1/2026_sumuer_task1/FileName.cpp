#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int answer = -1;
    int question;
    int count = 0;
    //乱数の初期化
    srand((unsigned int)time(nullptr));
    // 0～100の中からランダムに数字を1つ選ぶ
    question = rand() % 101;
    // ゲームのタイトルを表示
    cout << "数字当てゲーム" << endl;
    // ゲームの説明を表示
    cout << "0～100までの数字を当ててください。" << endl;
    // 正解するまで繰り返す
    while (question != answer)
    {
        // 予想した回数を1増やす
        count++;
        // 正しい数字が入力されるまで繰り返す
        while (true)
        {
            // 数字の入力を促す
            cout << "0～100の数字を入力してください：" << endl;
            cin >> answer;
            // 0～100以外が入力された場合
            if (answer < 0 || answer > 100)
            {
                //再入力させる
                cout << "入力に誤りがあります。再入力してください。" << endl;
            }
            else
            {
                // 正しい範囲なら入力処理を終了
                break;
            }
        }
        // 入力した数字が正解より小さい場合
        if (question > answer)
        {
            // もっと大きい数字だと教える
            cout << "もっと大きい数字です。" << endl;
        }
        // 入力した数字が正解より大きい場合
        else if (question < answer)
        {
            // もっと小さい数字だと教える
            cout << "もっと小さい数字です。" << endl;
        }
    }
    // 正解したことを表示
    cout << endl;
    cout << "おめでとうございます！正解です！" << endl;
    // 正解の数字を表示
    cout << "正解：" << answer << endl;
    // 何回目で正解したかを表示
    cout << count << "回目で当てることができました。" << endl;

    return 0;
}