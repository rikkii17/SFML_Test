#include"Ball.h"
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
//Debugsystem

Ball::Ball(float radius, const sf::Color& color, sf::Vector2f start_position, sf::Vector2f speed)
	:m_radius(radius),
	m_color(color),
	m_start_position(start_position),
	m_speed(speed)
{
	m_circle.setRadius(m_radius);
	m_circle.setFillColor(m_color);
	m_circle.setPosition(m_start_position);
	m_circle.setOrigin(sf::Vector2f(m_radius, m_radius));
	//m_circle‚Ìset up
}

void Ball::draw(sf::RenderWindow& mainwindow) {
	mainwindow.draw(m_circle);
}