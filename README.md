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

## How to run
```bash
./cub3D <map_file_path>
```

## Controls
- WASD to move
- Arrow left and arrow right or mouse to turn
- Escape to exit
- P to pause
- Space to dash
- Tab to open/close the map

<img src="https://github.com/kmeixner247/cub3D/blob/master/cub3d.png" width=800/>

## How to create a map file

The map file must have the ending .cub.

It must contain four wall textures (one for every cardinal direction), colors for the floor and the ceiling, and a map. The map must be the last element and cannot be followed by any other line. All other elements can be in any order.

The texture lines have the following format:
```
NO <relative path>
```
Where NO can be replaced with SO, EA, or WE and the path must be a relative path to a .xpm file.

The color lines have the following format:
```
F <Red>,<Green>,<Blue>
F <Red>,<Green>,<Blue>
```
Where <Red>, <Green> and <Blue> are values between 0 and 255.
  
The map is an array of numbers representing walls(1), floor tiles(0) and doors(2). It must be fully enclosed in walls, including the corners. The player starting position is denoted with W, E, N or S, denoting the initial view direction. Spaces can be used for padding, but no other characters are allowed.
  Here is a full valid map file:

```
NO ./assets/textures/temple_textures/temple1.xpm
SO ./assets/textures/temple_textures/temple2.xpm
WE ./assets/textures/temple_textures/temple3.xpm
EA ./assets/textures/temple_textures/temple4.xpm

F 50,50,40
C 90,90,80

1111111111
1000000001
1000000001
1000000001
1000000001
111212111111111111111111111111111111
100000000000000000001000000000000001
100000000000000000001000000000000001
112111111111111111111111111111100001
100000000000000000000000000000000001
100000000000000000000000000000000001
111111111111121111111111111111111111
100100010001000100010010000000000001
100001000100010001000010000010000001
100100010001000100010010000011121111
100000000000000000000010000010000001
100100010001000100010010000010000001
100000000000000000000010000010000001
111211111111111111111110000010000001
100000000000000000000000000010000001
10000000000000000000000000001000N001
111111111111111111111111111111111111
```
