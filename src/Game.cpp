
#include "../inc/Game.hpp"

Game::Game() {}
Game::~Game() {}

void Game::Init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {

    SDL_Init( SDL_INIT_EVERYTHING );
    
    TTF_Init();
    gFont = TTF_OpenFont("/usr/share/fonts/truetype/ubuntu/UbuntuMono-R.ttf", 24);

    int flags = (fullscreen ? SDL_WINDOW_FULLSCREEN : SDL_WINDOW_SHOWN);

    window = SDL_CreateWindow("LibreJump", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, flags);
    renderer = SDL_CreateRenderer(window, -1, 0);


    gameState = MAIN_MENU;
    RenderMainMenu();

    isRunning = true;
}

void Game::HandleEvents() {

    SDL_Event event;
    SDL_WaitEvent( &event );

    switch( event.type ) {

        case SDL_QUIT:
            isRunning = false;
            break;

        case SDL_MOUSEBUTTONDOWN:
            std::cout << event.button.x << "        " << event.button.y << '\n';
            
            if( gameState == MAIN_MENU )    QueryMainMenu( event.button.x, event.button.y );
            else if( gameState == SETTINGS )    QuerySettings( event.button.x, event.button.y );
            else if( gameState == SCORE )    QueryScores( event.button.x, event.button.y );

            break;

        default:
            break;

    }
}

void Game::RenderMainMenu() {

    SDL_SetRenderDrawColor( renderer, 0, 255, 0, 255 );
    SDL_RenderClear( renderer );
    SDL_RenderPresent( renderer );
}
void Game::QueryMainMenu( int posX, int posY ) {

    std::cout << posX << "         <<\n";

    if( posX > 400) {

        gameState = SETTINGS;
        RenderSettings();

    } else {

        Play();
    }
}

void Game::RenderSettings() {
    
    SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
    SDL_RenderClear( renderer );
    SDL_RenderPresent( renderer );

}
void Game::QuerySettings( int posX, int posY ) {

    if( posX > 400) {
        gameState = MAIN_MENU;
        RenderMainMenu();
    }
}

void Game::RenderScores() {
    
}
void Game::QueryScores( int posX, int posY ) {

}

void Game::Play() {

    
}

void Game::Clean() {

    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    TTF_CloseFont( gFont );
    
    TTF_Quit();
    SDL_Quit();
    
    std::cout << "cleaned \n";
}

bool Game::IsRunning() {

    return this->isRunning;
}

TTF_Font* Game::GetFont() {

    return gFont;
}

SDL_Renderer* Game::GetRenderer() {

    return renderer;
}