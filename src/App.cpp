#include <raylib.h>
#include "../include/App.h"
#include "../include/Menu.h"


App::App() : currentState(new Menu) {

}

void App::initWindow() {
    InitWindow(currentState->W_WIDTH,currentState->W_HEIGHT,currentState->W_TITLE);
}

void App::run() {

    this->initWindow();
    SetTargetFPS(60);
    
    while(!WindowShouldClose())
    {
        BeginDrawing();

        this->currentState->run(this);

        EndDrawing();
    }
}