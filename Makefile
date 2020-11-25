# Demo code for unicode/ascii spinners.
#
# CC0 1.0 Universal (CC0 1.0) Public Domain Dedication
# https://creativecommons.org/publicdomain/zero/1.0/


CC=/usr/bin/cc
CXX=/usr/bin/g++

c: c/main.c
	$(CC) -o spinner $<

cpp: cpp/main.cpp
	$(CXX) -o spinner $<

.PHONY: clean
clean:
	rm -rf spinner
