# CIS 25 RPG Final Project

This is a simple console-based RPG project for CIS 25.

## Current Status

**Implemented Features**:
- Feature 1: Display Player Status  
  Shows the player's name, health, attack power, and inventory count.

**Stubbed / Planned Features**:
- Enemy combat
- Map movement
- Item pickup effects
- Quest tracking
- Win/lose conditions

**Known Issues**:
- The game is still small and only demonstrates the first working feature.
- Combat and movement are planned for later features.

## Build and Run

```bash
cmake -S . -B build
cmake --build build
./build/rpg_game
ctest --test-dir build --verbose
