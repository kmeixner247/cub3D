# cub3D
A raycasting engine in C using the minilibx graphics library

## Notes
This project was written on MacOS with Intel architecture. The minilibx graphics library will not work on linux or on ARM architecture.

## Requirements

This project relies on the X11 library for its graphical components. Before running the project, please ensure that you have the X11 library installed on your system.
To install the X11 library on macOS, you can use Homebrew:

```bash
brew install libx11
```

## Setup
Clone the repository onto your system and run ```make```. If everything compiled well, you should have the executable cub3D in your directory. Run this executable to start the program.
To activate audio, run ```make bonus``` instead.

## Controls
- WASD to move
- Arrow left and arrow right or mouse to turn
- Escape to exit
- P to pause
- Space to dash
- Tab to open/close the map

