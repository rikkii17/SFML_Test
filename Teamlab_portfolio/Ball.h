#ifndef BALL_H
//�_�u���C���N���[�h�K�[�h
#define BALL_H
//�C���N���[�h�t���O�̒�`

#include<SFML/Graphics.hpp>
//include

class Ball {
public:
	
	Ball(float radius, const sf::Color& color, sf::Vector2f start_ppsition, sf::Vector2f speed);
	//�R���X�g���N�^

	//���]�b�g(�`��)
	void draw(sf::RenderWindow& mainwindow);

private:
	float m_radius;//���a
	sf::Color m_color;//�F
	sf::Vector2f m_start_position;//���L�ʒu
	sf::Vector2f m_speed;//���x
	sf::CircleShape m_circle;//�~�`��ϐ�
#endif // BALL_H
