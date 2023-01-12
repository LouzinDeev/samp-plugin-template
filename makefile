all:
	cd build && cmake .. && cmake --build .
win:
	cd build && cmake -A Win32 .. && cmake --build .
clear:
	rm -rf build && mkdir build