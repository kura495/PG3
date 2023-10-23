#include "stdio.h"

#include "Enemy.h"

Enemy::Enemy(){}
Enemy::~Enemy(){}

//void Enemy::Initalize(){}

void Enemy::Update()
{
	state_ = static_cast<size_t>(EnemyState::Approach);
	(this->*FuncTable[state_])();
	state_ = static_cast<size_t>(EnemyState::Shot);
	(this->*FuncTable[state_])();
	state_ = static_cast<size_t>(EnemyState::Leave);
	(this->*FuncTable[state_])();

}

//void Enemy::Draw(){}

void Enemy::Approach()
{
	printf("近づいてきた！\n");
}

void Enemy::Leave()
{
	printf("離れていった・・・\n");
}

void Enemy::Shot()
{
	printf("射撃してきた！\n");
}

void (Enemy::* Enemy::FuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Leave,
	&Enemy::Shot
};