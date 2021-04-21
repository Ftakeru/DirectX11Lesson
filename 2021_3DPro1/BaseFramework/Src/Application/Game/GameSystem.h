#pragma once

class GameSystem
{
public:
	//コンストラクター
	GameSystem(){}
	//デストラクター
	~GameSystem() { Release(); }

	void Init();	//初期化
	void Update(); //更新
	void Draw();	//描画

private:
	void Release();//解放
	
	KdModelWork m_sky; //空のモデル
};