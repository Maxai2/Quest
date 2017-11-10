#pragma once

#include <SFML/Graphics.hpp>
#include "Functions.h"
#include "Player.h"
#include "Skeleton.h"

using namespace sf;

//---------------------------------------------------------------------------------------
class Game
{
//	RenderWindow window(VideoMode(700, 500), "Quest");

	//Image heroImage;
	//heroImage.loadFromFile("Textures/Jake_Shine.png");
	//heroImage.createMaskFromColor(Color(255, 255, 255));

	//Texture heroTexture;
	//heroTexture.loadFromImage(heroImage);

	////Texture heroTexture;
	////heroTexture.loadFromFile("Textures/Dino.png");

	//Sprite heroSprite;
	//heroSprite.setTexture(heroTexture);
	//heroSprite.setTextureRect(IntRect(213, 135, 34, 54.75));
	////heroSprite.setPosition(50, 25);

	Player* player;
	Skeleton* skel;
	vector<GameObject*> staticObjects;
	vector<Enemy*> enemies;

	Game();
	Position placeChecker();
public:
	static Game& get();

	void Draw();
	void drawPlayer();
	void drawSkelet();
	void skeletMove();

	Player* getPlayer();
	Skeleton* getSkeleton();
};
//---------------------------------------------------------------------------------------