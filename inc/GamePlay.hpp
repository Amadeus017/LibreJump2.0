
#ifndef _PLAY_HPP_
#define _PLAY_HPP_

#include <iostream>
#include <vector>
#include <time.h>
#include <fstream>
#include <sstream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>


enum CurrWall { LEFT, RIGHT };


class UI {

public:
    static void RenderTextBox( SDL_Renderer *renderer, SDL_Rect rect, const char* content, TTF_Font* gFont, SDL_Color bgColor, SDL_Color fontColor );

};


class Entity {

public:
    CurrWall currWall;
    SDL_Rect hitBox;

    float posX, posY;
    float width, height;

    float coolTime;

public:
    Entity();
    ~Entity();

    virtual void Render( SDL_Renderer *renderer );
    void reduceCoolTime( float elapsed );
};

class Player : public Entity {

public:
    Player();
    ~Player();

    void Jump();
};

class Obstacle : public Entity {

public:
    Obstacle( CurrWall currWall );
    ~Obstacle();

    void Fall( float elapsed );
};

class Walls {

private:
    SDL_Rect r1, r2;

public:
    Walls();
    ~Walls();

    void Render( SDL_Renderer *renderer );
};

class Scenery {

private:

public:
    Scenery();
    ~Scenery();

    void Render( SDL_Renderer *renderer );
};

class Score {

private:
    SDL_Rect scoreBox;

public:
    Score();
    ~Score();

    void Render( SDL_Renderer *renderer, const char* content, TTF_Font* gFont );
};


class GamePlay {

public:

    float obstacleCoolTime;

    SDL_Renderer *renderer;
    TTF_Font *gFont;

    Player *player;
    Walls *walls;
    Scenery *scenery;
    Score *score;
    std::vector< Obstacle* > obstacles;

    bool isPlaying;

public:

    float fps, elapsed;
    Uint32 totalFrames;

    GamePlay( SDL_Renderer* renderer, TTF_Font* gFont );
    ~GamePlay();

    void GenerateObstacle();
    bool CheckCollision();

    void ReduceObstacleCoolTime( float elapsed );

    void HandleEvents();
    void Update();
    void Render();

    void Clean();


    bool IsPlaying();
};

#endif
