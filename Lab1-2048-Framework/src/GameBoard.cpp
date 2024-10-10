#include "../include/GameBoard.h"
#include <algorithm>
#include <random>
#include <chrono>

GameBoard::GameBoard() {
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    generator = std::mt19937(seed);
    reset();
}

void GameBoard::reset() {
    // Initialize the board to be 4x4 with all values set to 0
    // TODO

    // Add two initial tiles
    // TODO
}

int GameBoard::move(Direction direction) {
    // TODO
}

void GameBoard::slide(Direction direction) {
    switch (direction) {
        case Direction::UP:
            // TODO
    }
}

int GameBoard::merge(Direction direction) {
    int moveScore = 0;
    switch (direction) {
        case Direction::UP:
            // TODO
    }

    return moveScore;
}

bool GameBoard::isGameOver() const {
    // Check if there are any empty tiles
    // TODO
}

bool GameBoard::hasWinningTile() const {
    // TODO
}

const Board &GameBoard::getBoard() const {
    return board;
}