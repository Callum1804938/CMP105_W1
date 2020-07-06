#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect_red.setSize(sf::Vector2f(200, 200));
	rect_red.setPosition(500, 250);
	rect_red.setFillColor(sf::Color::Red);

	rect_green.setSize(sf::Vector2f(150, 150));
	rect_green.setPosition(525, 275);
	rect_green.setFillColor(sf::Color::Green);

	rect_blue.setSize(sf::Vector2f(100, 100));
	rect_blue.setPosition(550, 300);
	rect_blue.setFillColor(sf::Color::Blue);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "failure to load font file" << std::endl;
	}

	game_title.setFont(font);
	game_title.setString("A Shameless Copy");
	game_title.setCharacterSize(30);
	game_title.setFillColor(sf::Color::Yellow);
	game_title.setStyle(sf::Text::Bold);
	game_title.setPosition(475, 0);
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
	window->draw(rect_red);
	window->draw(rect_green);
	window->draw(rect_blue);
	window->draw(game_title);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(77,178,255));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}