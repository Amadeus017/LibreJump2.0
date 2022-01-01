
// #ifndef _ENTITY_HPP_
// #define _ENTITY_HPP_

// #include <iostream>
// #include <SDL2/SDL.h>
// #include <SDL2/SDL_ttf.h>


// class EntityTexture {

// private:
//     SDL_Texture *texture;
//     int width, height;

// public:
//     EntityTexture();
//     ~EntityTexture();

//     bool LoadFromFile( std::string path );

//     void Render( SDL_Renderer *renderer, int posX, int posY, SDL_Rect *clip );
//     void Clean();
// };

// class Entity {

// protected:
//     EntityTexture *eTexture;

// public:
//     Entity();
//     ~Entity();

//     virtual void Render( SDL_Renderer *renderer );
// };


// // UI CLASSES

// class Button : public Entity {

// private:
//     SDL_Rect rect;
//     TTF_Font *font;

//     int posX, posY, width, height;
//     const char* content;

//     SDL_Color backgroundColor, fontColor;

// public:
//     Button( int posX, int posY, int width, int height, const char* content, SDL_Color backgroundColor, SDL_Color fontColor, TTF_Font *font );
//     ~Button();

//     void Render( SDL_Renderer *renderer );
// };


// // GAMEPLAY CLASSES

// class GameObject : public Entity {

// protected:

// public:

// };


// class Player : public GameObject {
    
// };

// class Obstacle : public GameObject {

// };

// class Wall : public GameObject {

// };

// class Scenery : public GameObject {

// };

// #endif
