#pragma once

//コントローターの入力状態を取得する
namespace Pad
{
	//パッドの入力状態を取得
	void update();

	//押し下げ判定
	bool isPress(int button);
	//トリガー判定
	bool isTriggr(int button);
	//離した判定
	bool isRelase(int button);
}


