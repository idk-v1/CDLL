import ctypes, os, msvcrt

os.chdir(os.path.dirname(os.path.realpath(__file__)) + "/x64/Debug")
for file in os.listdir():
	if file.endswith(".dll"):
		name = file
dll = ctypes.CDLL("./" + name)
print(name, "exited with code {idk how to get the return code}")
print("Press any key to continue...")
msvcrt.getch()
del dll