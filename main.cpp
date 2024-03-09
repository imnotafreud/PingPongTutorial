#include <iostream>
#include <raylib.h>
#include "settings.h"

using namespace std;


int main () {

    std::cout << "Starting the game";
    InitWindow(screen_width, screen_height, "My Game!");
    SetTargetFPS(TARGET_FPS);

    
    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();

    return 0;

}