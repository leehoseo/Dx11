#include "Input.h"



Input::Input()
{
}

Input::Input(const Input& other)
{
}


Input::~Input()
{
}


void Input::Initialize()
{
	int i;


	// ��� Ű���� ������ ���� ���·� �ʱ�ȭ�մϴ�.
	for (i = 0; i<256; i++)
	{
		m_keys[i] = false;
	}

	return;
}


void Input::KeyDown(unsigned int input)
{
	// Ű�� ���ȴٸ� �� ���¸� �迭�� �����մϴ�.
	m_keys[input] = true;
	return;
}


void Input::KeyUp(unsigned int input)
{
	// Ű�� �������ٸ� �� ���¸� �迭�� �����մϴ�.
	m_keys[input] = false;
	return;
}


bool Input::IsKeyDown(unsigned int key)
{
	// ���� Ű�� ����/�� �������� ��ȯ�մϴ�.
	return m_keys[key];
}