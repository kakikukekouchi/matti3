#include"FreamControl.h"
#include"DxLib.h"
/**************************
*マクロ定義
**************************/

/*************************
*型定義
**************************/

/*************************
*定数定義
*************************/

/*************************
*変数宣言
*************************/

int FreamTime;
int NowTime;
int Wait;
int LastTime;

/*************************
*フレーム制御機能：初期化処理
*引数：なし
*戻り値；なし
**************************/

void FreamControl_Initialize(void)
{
	NowTime = GetNowCount();
	Wait = FreamTime - (NowTime - LastTime);

	if (Wait > 0)
	{
		WaitTimer(Wait);
	}
	LastTime = GetNowCount();

}