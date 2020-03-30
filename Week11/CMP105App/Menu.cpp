#include "Menu.h"
Menu::Menu(sf::RenderWindow* hwnd)
{
	window = hwnd;
	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "NO \n";
	}
	text.setFont(font);
	text.setString("Mouse position ");
	text.setCharacterSize(20);
	text.setFillColor(sf::Color::Blue);
	text.setPosition(20, 20);
}
void Menu::handleInput(float dt)
{
	
}
void Menu::update(float dt)
{

}
void Menu::render()
{
	beginDraw();
	window->draw(text);
	endDraw();
}
void Menu::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}
void Menu::endDraw()
{
	window->display();
}