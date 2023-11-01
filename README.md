# CDLL

This is my attempt at getting around school restrictions of not being able to run executable programs. The project file included is set to generate a .dll file. The 'DLL.h' file is to make the main file look normal. If it compiles, but can't start the program that means it worked! (DLLs can't run directly) Run the 'Run.hta' script to test your program. The 'Run.hta' or 'Run.py' script are not hard coded to any one project, so it can be copy pasted and will work. For some reason only Python's DLL runner works. (Autohotkey and RUNDLL32.exe do not work) The 'Run.hta' script is to give python a cmd window so it doesn't close immediately.

The example program creates a window and send a packet to localhost.
Graphics has compilation errors and audio freezes python.
