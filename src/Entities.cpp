
// #include "../inc/Entities.hpp"


// // EntityTexture

// EntityTexture::EntityTexture() {}

// EntityTexture::~EntityTexture() {}

// bool EntityTexture::LoadFromFile( std::string path ) {

// }

// void EntityTexture::Render( SDL_Renderer *renderer, int posX, int posY, SDL_Rect *clip = NULL ) {

// }

// void EntityTexture::Clean() {}


// // Entity

// Entity::Entity() {}
// Entity::~Entity() {}

// void Entity::Render( SDL_Renderer *renderer ) {}


// // Button

// Button::Button( int posX, int posY, int width, int height, const char* content, SDL_Color backgroundColor, SDL_Color fontColor, TTF_Font *font ) {

//     this->posX = posX;
//     this->posY = posY;
//     this->width = width;
//     this->height = height;

//     this->content = content;

//     this->backgroundColor = backgroundColor;
//     this->fontColor = fontColor;

//     this->font = font;
// }

// Button::~Button() {}

// void Button::Render( SDL_Renderer *renderer ) {

//     rect.h = height;
//     rect.w = width;
//     rect.x = posX;
//     rect.y = posY;

//     SDL_Surface* surfaceMessage =
//         TTF_RenderText_Solid(font, content, fontColor); 

//     SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);

//     SDL_FreeSurface( surfaceMessage );

//     SDL_SetRenderDrawColor( renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a );
//     SDL_RenderFillRect( renderer, &rect );

//     SDL_RenderCopy( renderer, Message, NULL, &rect );

//     SDL_RenderPresent(renderer);

//     // std::cout << "aosdhaosidj";
// }