#include "SceneTitle.h"
#include "DxLib.h"
#include "game.h"

void SceneTitle::init()
{
	m_textPosY = 0;
	m_textVecY = 4;

	m_isEnd = false;

	m_menu.init();
	m_menu.addItem("�Q�[���X�^�[�g");
	m_menu.addItem("�I�v�V����");
	m_menu.addItem("�Q�[���I��");

	m_menu.setPos(64, 64);

	m_menu.setupCursor();

}

void SceneTitle::end()
{
	m_menu.end();
}

void SceneTitle::update()
{
	// �����̈ړ�
	m_textPosY += m_textVecY;
	if (m_textPosY < 0)
	{
		m_textPosY = 0;
		m_textVecY = 4;
	}
	if (m_textPosY > 200)
	{
		m_textPosY = 200;
		m_textVecY = -4;
	}

	m_menu.update();

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		m_isEnd = true;
	}
}

void SceneTitle::draw()
{
	//DrawString(0, m_textPosY,"�^�C�g�����",GetColor(255,255,255));

	m_menu.draw();
}