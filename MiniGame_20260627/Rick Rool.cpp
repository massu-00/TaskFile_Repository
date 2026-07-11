#include"Dxlib.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetGraphMode(680, 500, 32);
	if (DxLib_IsInit() == -1) return -1;

	int time = 0;
	int num = 0;
	int num2 = 0;

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClearDrawScreen();

		if (CheckHitKey(KEY_INPUT_SPACE))
		{
			num++;
		}
		if(num == 1)
		{
			LoadGraphScreen(0, 0, "image/Egg.webp", TRUE);
			WaitTimer(1000);
		}
		if(num == 2)
		{
			LoadGraphScreen(0, 0, "image/hiyoko.png", TRUE);
			WaitTimer(1000);
		}
		if(num == 3)
		{
		PlayMovie("image/RickRoll.mp4", 1, DX_MOVIEPLAYTYPE_NORMAL);
		}

		ScreenFlip();
	}

	DxLib_End();

	return 0;
}
