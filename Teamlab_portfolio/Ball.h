#ifndef BALL_H
//�_�u���C���N���[�h�K�[�h
#define BALL_H
//�C���N���[�h�t���O�̒�`

#include<SFML/Graphics.hpp>
//include

class Ball {
public:

	Ball(float radius, const sf::Color& color, sf::Vector2f position, sf::Vector2f speed);
	//�R���X�g���N�^

	sf::Vector2f m_position;//�ʒu
	sf::Clock m_time;
	sf::Vector2f now_position;
	//�p�u���b�N�ϐ�
	
	//���]�b�g(�`��)
	void draw(sf::RenderWindow& mainwindow);
	void move(sf::RenderWindow& mainwindow,sf::Clock time);

private:
	float m_radius;//���a
	sf::Color m_color;//�F
	sf::Vector2f m_speed;//���x
	sf::CircleShape m_circle;//�~�`��ϐ�

};
#endif // BALL_H
