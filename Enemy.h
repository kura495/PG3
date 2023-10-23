#pragma once
enum class EnemyState{
	Approach,
	Leave,
	Shot
};

class Enemy
{
public:
	Enemy();
	~Enemy();

	//void Initalize();
	void Update();
	//void Draw();
	void Approach();
	void Leave();
	void Shot();


private:
	//メンバ関数ポインタのテーブル
	static void (Enemy::* FuncTable[])();
	size_t state_;
};

