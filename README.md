# AFK Bot
This is a simeple C console project that serves the purpose of a way for me to learn C. This project will allow the user to select an OS and how long the program is to run for. The program will then move the mouse cursor at the end of every time interval(eg: 1 minute).
# Compiling
To compile this program on a linux distro, run the following commands:

1. cd into the afk_bot_linux folder
```
cd afk_bot_linux
```

2. compile the afk bot program
```
gcc -o afk-bot main.c afk_bot/input.c afk_bot/move_mouse.c -lX11
```

To compile this program on windows, run the following commands:
1. cd into the afk_bot_windows folder
```
cd afk_bot_windows
```

2. compile the afk bot program
```
gcc -o afk-bot main.c afk_bot/input.c afk_bot/move_mouse.c
```