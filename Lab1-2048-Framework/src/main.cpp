#include <iostream>
#include "../include/Game.h"
#include "../include/GameRender.h"
#include "../include/InputHandler.h"

int main(){
    Game game;

    // Display welcome message
    TerminalRender::displayWelcomeMessage();

    // Wait for the start game command
    InputType command;
    while (true) {
        command = InputHandler::handleInput();
        if (command == InputType::START_GAME) {
            break;
        } else {
            std::cout << "Invalid input. Press 'E' to start the game.\n";
        }
    }

    // Initialize the game
    // TODO

    // Game loop
    while (true) {
        // Handle user input
        // TODO

        // Check for win or lose conditions
        // TODO
    }

    // Display elapsed time
    // TODO

    return 0;
}

