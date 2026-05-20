# CIS 25 RPG Final Project

This is a simple console-based RPG project for CIS 25.

## Features

### Implemented
- Display Player Status
- Remove Item From Inventory
- Use Healing Potion

### Stubbed / Planned
- Enemy combat
- Map movement
- Quest tracking
- Win/lose conditions

### Not Yet Implemented
- Save/load system
- Multiple enemy encounters
- Full gameplay loop

## Build Instructions

cmake -S . -B build
cmake --build build

## Run Instructions

./build/rpg_game

## Test Instructions

ctest --test-dir build --verbose

## Author

Ebubekir Erol
