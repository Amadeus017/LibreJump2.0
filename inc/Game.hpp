
#ifndef _GAME_HPP_
#define _GAME_HPP_

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class Game {

private:

    enum GameState { MAIN_MENU, PLAYING, SCORE, SETTINGS };

    GameState gameState;
    bool isRunning;

    SDL_Window *window;
    SDL_Renderer *renderer;

    TTF_Font *gFont;

public:

    Game();
    ~Game();

    void Init(const char*, int, int, int, int, bool);

    void HandleEvents();

    void RenderMainMenu();
    void QueryMainMenu(int, int);

    void RenderSettings();
    void QuerySettings(int, int);

    void RenderScores();
    void QueryScores(int, int);

    void Play();

    void Clean();

    bool IsRunning();
    TTF_Font* GetFont();
    SDL_Renderer* GetRenderer();
};

#endif
