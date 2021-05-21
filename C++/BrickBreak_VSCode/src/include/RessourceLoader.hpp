#ifndef _RLOADER_H_
#define _RLOADER_H_
#include "SFML/Graphics.hpp"
#include <iostream>

#pragma once
class RessourceLoader
{
	public:

	sf::Texture BRICK_1_G1_tex;
	sf::Texture BRICK_1_B1_tex;
	sf::Texture BRICK_1_GR1_tex;
	sf::Texture BRICK_1_O1_tex;
	sf::Texture BRICK_1_R1_tex;
	sf::Texture BRICK_1_V1_tex;
	sf::Texture BRICK_1_Y1_tex;
	sf::Texture BACKGROUND_tex;
	sf::Texture MENU_tex;
	sf::Texture BLANK_MENU_tex;

	sf::Texture BUTTON_DN_tex;
	sf::Texture BUTTON_UP_tex;

	sf::Texture BUTTON_PLAY_DN_tex;
	sf::Texture BUTTON_PLAY_UP_tex;
	sf::Texture BUTTON_OPTIONS_DN_tex;
	sf::Texture BUTTON_OPTIONS_UP_tex;
	sf::Texture BUTTON_EXIT_DN_tex;
	sf::Texture BUTTON_EXIT_UP_tex;
	sf::Texture SELECT_tex;

	sf::Texture BUTTON_START_tex;
	sf::Texture BUTTON_OPTIONS_tex;
	sf::Texture BUTTON_EXIT_tex;

	sf::Texture MENU_BACKGROUND_tex;

	sf::Texture BALL_tex;
	sf::Texture PAD_tex;
	sf::Texture LIFE_tex;

	sf::Font font;

	RessourceLoader();

	void load();
};
#endif