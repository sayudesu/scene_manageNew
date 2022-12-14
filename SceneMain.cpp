#include "SceneMain.h"
#include "DxLib.h"
#include "Pad.h"

void SceneMain::init()
{
	m_textPosX = 0;
	m_textVecX = 4;

	m_isEnd = false;
}

void SceneMain::update()
{
	// 文字の移動
	m_textPosX += m_textVecX;
	if (m_textPosX < 0)
	{
		m_textPosX = 0;
		m_textVecX = 4;
	}
	if (m_textPosX > 300)
	{
		m_textPosX = 300;
		m_textVecX = -4;
	}

	if (Pad::isTriggr(PAD_INPUT_2))
	{
		m_isEnd = true;
	}
}

void SceneMain::draw()
{
	DrawString(m_textPosX, 0,"メイン画面",GetColor(255,255,255));
}