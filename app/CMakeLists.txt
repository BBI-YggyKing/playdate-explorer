cmake_minimum_required(VERSION 3.14)
set(CMAKE_C_STANDARD 11)

# Initial Variables
set(SDK $ENV{PLAYDATE_SDK})

# Game Name Customization
set(PLAYDATE_GAME_NAME explorer)
set(PLAYDATE_GAME_DEVICE explorer_DEVICE)

# Source files
#TODO include a txt from src that keeps an updated list of files to compile
file(
    GLOB_RECURSE
    SOURCE_FILES
    src/*.c
)

# Configure project
project(${PLAYDATE_GAME_NAME} C ASM)
add_executable(${PLAYDATE_GAME_DEVICE} ${SDK}/C_API/buildsupport/setup.c ${SOURCE_FILES})

# Make sure we get rid of any existing builds on clean
set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_CLEAN_FILES "../${PLAYDATE_GAME_NAME}.pdx" "../Source/pdex.bin")

include(${SDK}/C_API/buildsupport/playdate_game.cmake)
