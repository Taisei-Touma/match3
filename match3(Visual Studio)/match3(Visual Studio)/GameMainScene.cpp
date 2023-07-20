//GameMainScene_cpp.pdf

#include "GameMainScene.h"
#include "DxLib.h"
#include "Stage.h"
#include "SceneManager.h"

/**************************
* マクロ定義
**************************/
#define TIMELIMIT	(3600 * 3) //制限時間
#define NUMBER_IMAGE_MAX　(10) //数字画像数
/**************************
*型定義
**************************/

/**************************
* 変数宣言
**************************/
int GameScore;
int GameLevel;
int GameMission;
int GameTime;
int GameCount; //初期化されないようにするためのカウント
int ReStartFlag;

int NUmberImage[NUMBER_IMAGE_MAX];	//数字用画像

/**************************
* プロトタイプ宣言
**************************/

/**************************
* ゲームメイン画面:初期化処理
* 引数:なし
* 戻り値:エラー情報
**************************/
int GameMainScene_Initialize(void)
{
	int ret = 0;
	int i;

	//画像の読み込み
	LoadDivGraph("images/number.png", NUMBER_IMAGE_MAX,
		NUMBER_IMAGE_MAX, 1, 60, 120, NumberImage);

	//ステージ機能初期化
	ret = StageInitialize();

	//エラーチェック
	for (i = 0; i < NUMBER_IMAGE_MAX; i++)
	{
		if (NumberImage[i] == D_ERROR)
		{
			ret = D_ERROR;
			break;
		}
	}

	//ゲームプレイが初回かどうか？
	if (GameCount == 0)
	{
		GameScore = 0;			//スコアの初期化
		GameLevel = 1;			//ゲームレベルの初期化
		Set_StageMission(3);	//ミッションの初期化
		GameCount++;			//次回の設定
	}
	else
	{
		GameLevel++;		//ゲームレベルの更新
		Set_StageMission(3) //ミッションを増やす
	}
	GemeTime = TIMELIMIT;	//制限時間の初期化

	return ret;
}

/**************************
* ゲームメイン画面:初期化処理
* 引数:なし
* 戻り値:エラー情報
**************************/

void GameMainScene_Update(void)
{}
