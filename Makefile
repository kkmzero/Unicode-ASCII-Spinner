#Only for testing purposes

CC=/usr/bin/cc
CXX=/usr/bin/g++

c: c/main.c
	$(CC) -o spinner $<

cpp: cpp/main.cpp
	$(CXX) -o spinner $<

.PHONY: clean
clean:
	rm -rf spinner
