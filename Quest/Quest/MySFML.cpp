#include <string>
#include "MySFML.h"

extern string Path;
//-------------------------------------------------------------
static MySFML INSTANCE;
MySFML &getMySFML()
{
    return INSTANCE;
}
//-------------------------------------------------------------
MySFML::MySFML()
{
//    window.create(VideoMode(1280, 800), "Quest"/*, Style::Fullscreen*/);
}
//-------------------------------------------------------------
bool MySFML::LoadTextures()
{
    //heroImage.loadFromFile("Textures/Jake_Shine.png");   
    //DinoImage.loadFromFile("Textures/Dinosour.png");
    //mapImage.loadFromFile("Textures/DungeonCrawl.png");

    //heroTexture.loadFromImage(heroImage);
    //DinoTexture.loadFromImage(DinoImage);
    //mapTexture.loadFromImage(mapImage);

    if (!heroTexture.loadFromFile(Path + "Textures\\Jake_Shine.png"))
        return false;

    if (!DinoTexture.loadFromFile(Path + "Textures\\Dinosour.png"))
        return false;

    if (!mapTexture.loadFromFile(Path + "Textures\\DungeonCrawl.png"))
            return false;

    heroSprite.setTextureRect(IntRect(0, 0, 37, 55));
    DinoSprite.setTextureRect(IntRect(0, 0, 55, 59));
    mapSprite.setTexture(mapTexture);

    window.create(VideoMode(1280, 800), "Quest"/*, Style::Fullscreen*/);
}
//-------------------------------------------------------------
//RenderWindow window(VideoMode(700, 500), "Quest");
//
//Image heroImage;
//heroImage.loadFromFile("Textures/Jake_Shine.png");
////	heroImage.createMaskFromColor(Color(255, 255, 255));
//
//Texture heroTexture;
//heroTexture.loadFromImage(heroImage);
//
////Texture heroTexture;
////heroTexture.loadFromFile("Textures/Dino.png");
//
//Sprite heroSprite;
//heroSprite.setTexture(heroTexture);
//heroSprite.setTextureRect(IntRect(0, 0, 36, 53));
////heroSprite.setTextureRect(IntRect(213, 135, 34, 54.75));
////heroSprite.setPosition(50, 25);
//
//Clock clock;
////float teleportTime = 0;
//
//float CurrentFrame = 0;
//while (window.isOpen())
//{
//    float time = clock.getElapsedTime().asMicroseconds();
//    clock.restart();
//    time = time / 800;
//
//    Event event;
//    while (window.pollEvent(event))
//    {
//        if (event.type == Event::Closed)
//            window.close();
//    }
//
//    //teleportTime += time;
//
//    //if (teleportTime > 3000)
//    //{
//    //	heroSprite.setPosition(0, 120);
//    //	teleportTime = 0;
//    //}
//
//    if (Keyboard::isKeyPressed(Keyboard::S))
//    {
//        CurrentFrame += 0.005*time;
//        if (CurrentFrame > 4)
//            CurrentFrame -= 4;
//        heroSprite.setTextureRect(IntRect(36 * int(CurrentFrame), 0, 36, 53));
//        heroSprite.move(0, 0.1 * time);
//    }
//    else if (Keyboard::isKeyPressed(Keyboard::A))
//    {
//        CurrentFrame += 0.005*time;
//        if (CurrentFrame > 4)
//            CurrentFrame -= 4;
//        heroSprite.setTextureRect(IntRect(36 * int(CurrentFrame), 58, 36, 53));
//        heroSprite.move(-0.1 * time, 0);
//    }
//    else if (Keyboard::isKeyPressed(Keyboard::D))
//    {
//        CurrentFrame += 0.005*time;
//        if (CurrentFrame > 4)
//            CurrentFrame -= 4;
//        heroSprite.setTextureRect(IntRect(34 * int(CurrentFrame), 113, 34, 53));
//        heroSprite.move(0.1 * time, 0);
//    }
//    else if (Keyboard::isKeyPressed(Keyboard::W))
//    {
//        CurrentFrame += 0.005*time;
//        if (CurrentFrame > 4)
//            CurrentFrame -= 4;
//        heroSprite.setTextureRect(IntRect(36 * int(CurrentFrame), 166, 36, 53));
//        heroSprite.move(0, -0.1 * time);
//    }
//
//    window.clear();
//    window.draw(heroSprite);
//    window.display();
//
//    cout << time << "\n";
//}

//for (int i = 0; i < HEIGHT_MAP; i++)
//for (int j = 0; j < WIDTH_MAP; j++)
//{
//    if (TileMap[i][j] == ' ')  s_map.setTextureRect(IntRect(0, 0, 32, 32)); //если встретили символ пробел, то рисуем 1й квадратик
//    if (TileMap[i][j] == 's')  s_map.setTextureRect(IntRect(32, 0, 32, 32));//если встретили символ s, то рисуем 2й квадратик
//    if ((TileMap[i][j] == '0')) s_map.setTextureRect(IntRect(64, 0, 32, 32));//если встретили символ 0, то рисуем 3й квадратик


//    s_map.setPosition(j * 32, i * 32);//по сути раскидывает квадратики, превращая в карту. то есть задает каждому из них позицию. если убрать, то вся карта нарисуется в одном квадрате 32*32 и мы увидим один квадрат

//    window.draw(s_map);//рисуем квадратики на экран
//}