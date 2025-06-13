#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Window/Event.hpp>
#include<stdlib.h>
#include<iostream>

#include"Ball.h"

#define color_max 256
#define circle_size 30
#define framerate 60


int main() {
	
	sf::RenderWindow mainwindow(sf::VideoMode({800, 600}), "Test");
	//mainwindow.setFramerateLimit(framerate);
	while (mainwindow.isOpen()) {

		while (const std::optional event = mainwindow.pollEvent()) {
			if (event->is<sf::Event::Closed>()) {
				mainwindow.close();
			}
			//close

			if (event->is < sf::Event::MouseButtonPressed>()) {
				sf::Vector2i mouseposint = sf::Mouse::getPosition(mainwindow);
				sf::Vector2f mouseposfloat(static_cast<float>(mouseposint.x), static_cast<float>(mouseposint.y));
				Ball myball(circle_size, sf::Color(rand()%color_max, rand() % color_max, rand() % color_max, 255), mouseposfloat, sf::Vector2f(0, 0));
				myball.draw(mainwindow);
				
				
			}
		}
	}
}