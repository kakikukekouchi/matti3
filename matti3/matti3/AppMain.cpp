/********************************************

* プログラミング実習
* マッチ3ゲームの制作

********************************************/

#include"DxLib.h"

#include"FreamControl.h"

#include"InputControl.h"

#include"SceneManager.h"

/*******************************************

* マクロ定義文字サイズ

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

int WINAPI WinMain(_In_ HINSTANCE hinstance,
	_In_opt_ HINSTANCE hPrevInstace,
	_In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{

	//ウィンドウタイトル設定
	SetMainWindowText("Match 3 Puzzle");
	//ウィンドモードで起動
	ChangeWindowMode(TRUE);
	//画面サイズの最大サイズ,カラービット数を設定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, FONT_SIZE);

	//Dxライブラリ初期化処理
	//エラーが発生したら、終了する
	if (DxLib_Init() == D_ERROR)
	{
		return D_ERROR;
	}


//各機能の初期化処理
	FreamControl_Initialize();   //フレームレート制限機能

	Input_Initialize();          //入力制限機能


	//シーンマネージャー初期化処理
	//エラーが発生したら、終了する
	if (SceneManager_Initialize(E_TITLE) == D_ERROR)
	{
		return D_ERROR;
	}

	//描画先画面を裏にするS
	SetDrawScreen(DX_SCREEN_BACK);

	//文字サイズを設定
	SetFontSize(FONT_SIZE);

	//ゲームループ
	while (ProcessMessage() != D_ERROR && Input_Escape() == FALSE)
	{

		//入力制御機能更新処理
		Input_Update();

		//シーンマネージャー更新処理
		SceneManager_Update();

		//画面クリア
		ClearDrawScreen();

		//シーンマネージャー描画処理
		SceneManager_Draw();

		//フレームレート制御処理
		FreamControl_Update();

		//画面の内容を表画面に反映
		ScreenFlip();

	}
	//Dxライブラリ使用の終了処理
	Dxlib_End();

	return 0;

}

