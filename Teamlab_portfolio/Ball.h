#ifndef BALL_H
//ダブルインクルードガード
#define BALL_H
//インクルードフラグの定義

#include<SFML/Graphics.hpp>
//include

class Ball {
public:
	
	Ball(float radius, const sf::Color& color, sf::Vector2f start_ppsition, sf::Vector2f speed);
	//コンストラクタ

	//メゾット(描画)
	void draw(sf::RenderWindow& mainwindow);

private:
	float m_radius;//半径
	sf::Color m_color;//色
	sf::Vector2f m_start_position;//書記位置
	sf::Vector2f m_speed;//速度
	sf::CircleShape m_circle;//円描画変数
#endif // BALL_H
