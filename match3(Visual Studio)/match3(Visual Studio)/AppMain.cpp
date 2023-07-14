#include "DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{

		return -1;

	}

	//入力待機
	WaitKey();
#include<stdio.h>
	

	/**********************
*プログラム実習
:マッチ３のゲーム制作
**********************/

#include"DxLib.h"


/**********************
*マクロ定義
**********************/

#define SCREEN_HEIGHT	(480)	//スクリーンサイズ（高さ）
#define SCREEN_WIDTH	(640)	//スクリーンサイズ（幅）
#define SCREEN_COLORBIT (32)	//スクリーンカラービット
#define FONT_SIZE		(20)	//文字サイズ

/**********************
*型定義
**********************/



/**********************
*グローバル変数宣言
**********************/



/**********************
*プロトタイプ宣言
**********************/



/**********************
*プログラムの開始
**********************/
	int WINAPI WinMain(_In_HINSTANCE hInstance, _In_opt_HINSTANCE hPrevInstance,
		_In_LPSTR lpCmdLine, _In_int nShowCmd)
	{


		//ウィンドウタイトル設定
		SetMainWindowText("Match 3 Puzzle");
		//ウィンドウモードで起動
		ChangeWindowMode(TRUE);
		//画面サイズの最大サイズ、カラービット数を設定
		SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

		//Dxライブラリ初期化
	

	//Dxライブラリ使用の終了処理
	DxLib_End();

	//追加確認7/14/11:23

	return 0;
}



