/********************************************

* �v���O���~���O���K
* �}�b�`3�Q�[���̐���

********************************************/

#include"DxLib.h"

#include"FreamControl.h"

#include"InputControl.h"

#include"SceneManager.h"

/*******************************************

* �}�N����`

*******************************************/

#define SCREEN_HEIGHT    (480)      //�X�N���[���T�C�Y�i�����j

#define SCREEN_WIDTH     (640)     //�X�N���[���T�C�Y(��)

#define SCREEN_COLORBIT  (32)    �@//�X�N���[���J���[�r�b�g  

#define FONT_SIZE        (20)      //�����T�C�Y

/******************************************

*�^��`

******************************************/



/*******************************************

*�O���[�o���ϐ��錾

*******************************************/



/******************************************

*�v���g�^�C�v�錾

*******************************************/


/******************************************

*�v���O�����J�n

******************************************/

int WINAPI WinMain(_In_HINSTANCE hinstance, _In_opt_HINSTANCE hPrevInstace, _In_LPSTR lpCmdLine, _In_int nShowCmd)
{

	//�E�B���h�E�^�C�g���ݒ�
	SetMainWindowText("Match 3 Puzzle");
	//�E�B���h���[�h�ŋN��
	ChangWindowTMode(TRUE);
	//��ʃT�C�Y�̍ő�T�C�Y,�J���[�r�b�g����ݒ�
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

	//Dx���C�u��������������
	//�G���[������������A�I������
	if (DxLib_Init() == D_ERROR)
	{
		return D_ERROR;
	}


//�e�@�\�̏���������
	FreamControl_Initialize();   //�t���[�����[�g�����@�\

	Input_Initialize();          //���͐����@�\


}

