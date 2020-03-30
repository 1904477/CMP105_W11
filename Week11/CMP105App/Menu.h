#pragma once
#include <iostream>
#include"Framework\GameObject.h"
class Menu:public GameObject
{
public:

	Menu(sf::RenderWindow* hwnd);

	void handleInput(float dt);
	void update(float dt);
	void render();
	void beginDraw();
	void endDraw();

	sf::RenderWindow* window;
	sf::Font font;
	sf::Text text;
};

