#include "GameOverScene.h"
#include "DxLib.h"
#include "SceneManager.h"


/***********************
*�փ�����`
***********************/

int GameOverImage;
int GameOverSE;
int GameOverFlag;

/**********************
*�v���g�^�C�v�錾
**********************/

/*********************
*�Q�[���I�[�o�[��ʁF����������
* ���@���F�Ȃ�
* �߂�l�F�G���[���
**********************/

int GameOverScene_Initialize(void)
{
	int ret = 0;

	//�摜�ǂݍ���
	GameOverImage = LoadGraph("images/gameover.png");
	//�����ǂݍ���
	GameOverSE = LoadSoundMem("sounds/gameover_se.mp3");

	GameOverFlag = FALSE;

}






















