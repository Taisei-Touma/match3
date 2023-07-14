#include "DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{

		return -1;

	}

	//���͑ҋ@
	WaitKey();
#include<stdio.h>
	

	/**********************
*�v���O�������K
:�}�b�`�R�̃Q�[������
**********************/

#include"DxLib.h"


/**********************
*�}�N����`
**********************/

#define SCREEN_HEIGHT	(480)	//�X�N���[���T�C�Y�i�����j
#define SCREEN_WIDTH	(640)	//�X�N���[���T�C�Y�i���j
#define SCREEN_COLORBIT (32)	//�X�N���[���J���[�r�b�g
#define FONT_SIZE		(20)	//�����T�C�Y

/**********************
*�^��`
**********************/



/**********************
*�O���[�o���ϐ��錾
**********************/



/**********************
*�v���g�^�C�v�錾
**********************/



/**********************
*�v���O�����̊J�n
**********************/
	int WINAPI WinMain(_In_HINSTANCE hInstance, _In_opt_HINSTANCE hPrevInstance,
		_In_LPSTR lpCmdLine, _In_int nShowCmd)
	{


		//�E�B���h�E�^�C�g���ݒ�
		SetMainWindowText("Match 3 Puzzle");
		//�E�B���h�E���[�h�ŋN��
		ChangeWindowMode(TRUE);
		//��ʃT�C�Y�̍ő�T�C�Y�A�J���[�r�b�g����ݒ�
		SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

		//Dx���C�u��������������


	//�G���[������������A�I������
		if (DxLib_Init() == D_ERROR)
		{
			return D_ERROR;
		}

		//�e�@�\�̏���������
		FreamControl_Initialize();		//�t���[�����[�g����@�\
		Input_Initialize();				//���͐���

		//�V�[���}�l�[�W���[����������
		//�G���[������������I������
		if (SceneManager_Initialize(E_TITLE) == D_ERROR)
		{
			return D_ERROR;
		}

		//�`����ʂ𗠂ɂ���
		SetDrawScreen(DX_SCREEN_BACK);

		//�����T�C�Y��ݒ�
		SetFontSize(FONT_SIZE);

		//�Q�[�����[�v
		while (ProcessMassage() != D_ERROR && Input_Escape() == FALSE)
		{
			//���͐���@�\�X�V����
			Input_Update();

			//��ʃN���A
			ClearDrawScreen();

			//�V�[���}�l�[�W���[�`�揈��
			SceneManager_Draw();

			//�t���[�����[�g���䏈��
			Freamcontrol_Update();

			//��ʂ̓��e��\��ʂɔ��f
			ScreenFlip();
		}

		//Dx���C�u�����g�p�̏I������
		DxLib_End();

		return 0;
	}
	

	

	return 0;
}



