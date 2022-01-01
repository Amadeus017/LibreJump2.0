
#include "../inc/Game.hpp"
#include "../inc/Entities.hpp"

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

    // SDL_SetRenderDrawColor(renderer, 0, 100, 40, 255);

    isRunning = true;
}

// void Game::HandleEvents() {

//     SDL_Event event;
//     SDL_PollEvent(&event);

//     switch( event.type ) {

//         case SDL_QUIT:
//             isRunning = false;
//             break;

//         default:
//             break;
//     }
// }

// void Game::Update() {}

// void Game::Render() {

//     if( gameState == MAIN_MENU ) {

//         SDL_SetRenderDrawColor( renderer, 0, 255, 0, 255 );
//         SDL_RenderClear( renderer );

//         // // as TTF_RenderText_Solid could only be used on
//         // // SDL_Surface then you have to create the surface first
//         // SDL_Surface* surfaceMessage =
//         //     TTF_RenderText_Solid(gFont, "PLAY", {255, 255, 255}); 

//         // // now you can convert it into a texture
//         // SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);

//         // SDL_Rect r;

//         // r.h = 100;
//         // r.w = 200;
//         // r.x = 50;
//         // r.y = 50;

//         // SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
//         // SDL_RenderFillRect( renderer, &r );


//         // SDL_RenderCopy( renderer, Message, NULL, &r );
//     }

//     SDL_RenderPresent(renderer);
// }

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