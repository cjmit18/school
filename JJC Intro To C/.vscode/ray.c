#include <stdio.h>
#include "raylib.h"

/* simple c program*/
int main() {
    InitWindow(800, 600, "My Game");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, World!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}