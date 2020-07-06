#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	sf::RectangleShape rect_red;
	sf::RectangleShape rect_green;
	sf::RectangleShape rect_blue;
	sf::CircleShape circle;
	sf::Text game_title;
	sf::Font font;
};