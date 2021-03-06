#include "GameSystem.h"

//初期化
void GameSystem::Init()
{
	m_sky.Load("Data/Models/Sky/Sky.gltf");
}

void GameSystem::Update()
{
	OutputDebugStringA("更新関数\n");
}

void GameSystem::Draw()
{
	SHADER->m_effectShader.SetToDevice();

	SHADER->m_effectShader.DrawModel(m_sky);
}

void GameSystem::Release()
{
	OutputDebugStringA("解放関数\n");
}