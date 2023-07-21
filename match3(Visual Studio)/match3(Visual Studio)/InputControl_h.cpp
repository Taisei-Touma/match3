//InputControl_h.pdf

//GameOverScene_h.cpp
#pragma once

/**************************
* マクロ定義
**************************/

/**************************
*型定義
**************************/

/**************************
* プロトタイプ宣言
**************************/

void Input_Initialize(void);
void Input_Update(void);
int input_Escape(void);

int GetOldKey(int key);
int GetNowKey(int key);
int GetKeyFlg(int key);
int GetMousePositionX(void);
int GetMousePositionY(void);
