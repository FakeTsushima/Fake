#include "DxLib.h"

#include "common\Input.h"
#include "Sequence\Parent.h"

#define WINDOW_WIDTH 480
#define WINDOW_HEIGHT 480
int gCount = 0;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	// ウィンドウモード
	ChangeWindowMode(true);
	// ウィンドウサイズ設定
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32);

	if (DxLib_Init() == -1)	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
		if (!Sequence::Parent::instance()) {
			Sequence::Parent::create();
		}

		ClearDrawScreen();

		Sequence::Parent::instance()->update();

		if (Input::instance()->isTriggered(Input::A)) {
			DrawFormatString(
				0, 20, GetColor(255, 255, 255),
				"z is triggered"
			);
		}

		DrawFormatString(
			0, 0, GetColor(255, 255, 255),
			"Count : %d", gCount
		);

		ScreenFlip();
		gCount++;
	}

//	WaitKey();
	DxLib_End();
	return 0;
}