#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Window/Event.hpp>
int main() {
	sf::RenderWindow mainwindow(sf::VideoMode({800, 600
}), "Test");
	while (mainwindow.isOpen()) {

		while (const std::optional event = mainwindow.pollEvent()) {
			if (event->is<sf::Event::Closed>()) {
				mainwindow.close();
			}
		}
		{

		}
	}
}