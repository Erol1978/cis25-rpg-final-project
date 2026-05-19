cmake_minimum_required(VERSION 3.10)
project(CIS25RPGFinalProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(rpg_core
    src/Character.cpp
    src/Player.cpp
    src/Enemy.cpp
    src/Item.cpp
    src/Inventory.cpp
    src/Map.cpp
)

add_executable(rpg_game src/main.cpp)
target_link_libraries(rpg_game rpg_core)

add_executable(tests tests/test_main.cpp)
target_link_libraries(tests rpg_core)

enable_testing()
add_test(NAME FeatureTests COMMAND tests)
