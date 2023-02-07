mkdir build
cd build
cmake ..
cmake --build . --config Release(Debug)
cmake --install . --config Release(Debug)

# add to the PATH variable:
	Windows: c:/Program Files/atech
	Linux  : /usr/local/atech
