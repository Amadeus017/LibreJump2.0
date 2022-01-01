
#include "../inc/Game.hpp"

int main( int argc, char* argv[] ) {

    
    // SDL_Init(SDL_INIT_VIDEO);

    // TTF_Init();

    // SDL_Window *window = SDL_CreateWindow("LibreJump", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, SDL_WINDOW_SHOWN);

    // SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    // TTF_Font *gFont = TTF_OpenFont("/usr/share/fonts/truetype/ubuntu/UbuntuMono-R.ttf", 24);

    // // SDL_SetRenderDrawColor( renderer, 0, 255, 0, 255 );
    // //     SDL_RenderClear( renderer );

    //     // as TTF_RenderText_Solid could only be used on
    //     // SDL_Surface then you have to create the surface first
    //     SDL_Surface* surfaceMessage =
    //         TTF_RenderText_Solid(gFont, "put your text here", {100, 100, 100}); 

    //     // SDL_FreeSurface( surfaceMessage );

    //     // // now you can convert it into a texture
    //     // SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);

    //     // TTF_CloseFont( gFont );

    //     // SDL_Rect r;

    //     // r.h = 100;
    //     // r.w = 200;
    //     // r.x = 50;
    //     // r.y = 50;

    //     // SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
    //     // SDL_RenderFillRect( renderer, &r );


    //     // SDL_RenderCopy( renderer, Message, NULL, &r );

    // SDL_RenderClear(renderer);

    // SDL_RenderPresent(renderer);

    // SDL_Delay(3000);
        

    Game *game = new Game();

    game->Init("LibreJump", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, false);

    // Button *b1 = new Button( 50, 50, 200, 100, "PLAY", {255,0,0}, {0,0,0}, game->GetFont());
    // Button *b2 = new Button( 50, 200, 200, 100, "SETTINGS", {255,0,0}, {0,0,0}, game->GetFont());
    // Button *b3 = new Button( 50, 350, 200, 100, "SCORES", {255,0,0}, {0,0,0}, game->GetFont());

    // b1->Render( game->GetRenderer() );
    // b2->Render( game->GetRenderer() );
    // b3->Render( game->GetRenderer() );


    game->Clean();

    return 0;
    
    // // GAME LOOP

    // // while(game is running) {

    // //     handle user input

    // //     update game obj

    // //     render changes
    // // }
    
}