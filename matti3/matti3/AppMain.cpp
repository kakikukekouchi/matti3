/********************************************

* プログラミング実習
* マッチ3ゲームの制作

********************************************/

#include"DxLib.h"

#include"FreamControl.h"

#include"InputControl.h"

#include"SceneManager.h"

/*******************************************

* マクロ定義

*******************************************/

#define SCREEN_HEIGHT    (480)      //スクリーンサイズ（高さ）

#define SCREEN_WIDTH     (640)     //スクリーンサイズ(幅)

#define SCREEN_COLORBIT  (32)    　//スクリーンカラービット  

#define FONT_SIZE        (20)      //文字サイズ

/******************************************

*型定義

******************************************/



/*******************************************

*グローバル変数宣言

*******************************************/



/******************************************

*プロトタイプ宣言

*******************************************/


/******************************************

*プログラム開始

******************************************/

int WINAPI WinMain(_In_HINSTANCE hinstance, _In_opt_HINSTANCE hPrevInstace, _In_LPSTR lpCmdLine, _In_int nShowCmd)
{

	//ウィンドウタイトル設定
	SetMainWindowText("Match 3 Puzzle");
	//ウィンドモードで起動
	ChangWindowTMode(TRUE);
	//画面サイズの最大サイズ,カラービット数を設定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

	//Dxライブラリ初期化処理
	//エラーが発生したら、終了する
	if (DxLib_Init() == D_ERROR)
	{
		return D_ERROR;
	}


//各機能の初期化処理
	FreamControl_Initialize();   //フレームレート制限機能

	Input_Initialize();          //入力制限機能


}

