#pragma once

#include "SFML\Graphics.hpp"
#include <string>

using namespace std;
using namespace sf;
//---------------------------------------------------------------
class MySFML
{
    RenderWindow window;

    Image mapImage;
    Image heroImage;
    Image DinoImage;

    Texture mapTexture;
    Texture heroTexture;
    Texture DinoTexture;

    Sprite mapSprite;
    Sprite heroSprite;
    Sprite DinoSprite;

    MySFML();
public:
    static MySFML& get();
    
    RenderWindow& getWindow() { return window; }
    Sprite& getSpriteHero() { return heroSprite; }
    Sprite& getSpriteDino() { return DinoSprite; }
    Sprite& getSpriteMap() { return mapSprite; }
};
//---------------------------------------------------------------------------------------