#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect1.setSize(sf::Vector2f(200, 200));
	rect1.setPosition(500, 250);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(150, 150));
	rect2.setPosition(525, 275);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(100, 100));
	rect3.setPosition(550, 300);
	rect3.setFillColor(sf::Color::Blue);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();
	//thing to draw go here
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(0, 0, 0));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}