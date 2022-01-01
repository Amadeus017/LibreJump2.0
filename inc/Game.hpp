
#ifndef _GAME_HPP_
#define _GAME_HPP_

#include "./Entities.hpp";

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
    // void Update();
    // void Render();

    void Clean();

    bool IsRunning();
    TTF_Font* GetFont();
    SDL_Renderer* GetRenderer();
};

#endif
