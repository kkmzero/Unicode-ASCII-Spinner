c: C/main.c
	gcc -o spinner $<

cpp: Cpp/main.cpp
	g++ -o spinner $<

.PHONY: clean
clean:
	rm spinner
