# I dedicate any and all copyright interest in this software to the
# public domain. I make this dedication for the benefit of the public at
# large and to the detriment of my heirs and successors. I intend this
# dedication to be an overt act of relinquishment in perpetuity of all
# present and future rights to this software under copyright law.
#
# For more information, please refer to <http://unlicense.org/>


CC=/usr/bin/cc
CXX=/usr/bin/g++

c: c/main.c
	$(CC) -o spinner $<

cpp: cpp/main.cpp
	$(CXX) -o spinner $<

.PHONY: clean
clean:
	rm -rf spinner
