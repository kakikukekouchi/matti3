#include"FreamControl.h"
#include"DxLib.h"
/**************************
*�}�N����`
**************************/

/*************************
*�^��`
**************************/

/*************************
*�萔��`
*************************/

/*************************
*�ϐ��錾
*************************/

int FreamTIme;
int NowTime;
int Wait;
int LastTime;

/*************************
*�t���[������@�\�F����������
*�����F�Ȃ�
*�߂�l�G�Ȃ�
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