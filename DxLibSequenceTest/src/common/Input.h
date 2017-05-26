#ifndef INCLUDED_INPUT_H
#define INCLUDED_INPUT_H

class Input {
public:
	enum Button {
		A = 0,	// キーボード: z
		B,		// キーボード: x
		U,		// キーボード: ↑
		D,		// キーボード: ↓
		L,		// キーボード: ←
		R,		// キーボード: →
		Q,		// キーボード: q
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