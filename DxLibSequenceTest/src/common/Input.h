#ifndef INCLUDED_INPUT_H
#define INCLUDED_INPUT_H

class Input {
public:
	enum Button {
		A = 0,	// �L�[�{�[�h: z
		B,		// �L�[�{�[�h: x
		U,		// �L�[�{�[�h: ��
		D,		// �L�[�{�[�h: ��
		L,		// �L�[�{�[�h: ��
		R,		// �L�[�{�[�h: ��
		Q,		// �L�[�{�[�h: q
	};
	static Input* instance();
	static void create();
	static void destroy();
	bool isOn(Button);
	bool isTriggered(Button);
private:
	Input();
	~Input();
	bool mPreInput;
	int* mInputAry;
	static Input* mInstance;
};
#endif