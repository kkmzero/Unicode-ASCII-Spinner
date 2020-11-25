/*
 * Demo code for unicode/ascii spinners.
 *
 * CC0 1.0 Universal (CC0 1.0) Public Domain Dedication
 * https://creativecommons.org/publicdomain/zero/1.0/
 */

#include <iostream>
#include <unistd.h>

char spinner_a[5] = { '\\', '|', '/', '-', '\0'};
char spinner_b[7] = {'.', 'o', 'O', '@', '*', ' ', '\0'};
char spinner_c[3] = {'+', 'x', '\0'};
char spinner_d[5] = {'v', '<', '^', '>', '\0'};

void run_spinner(char *spinner, int spinner_size, unsigned int sleeptime) {
    while(1) {
        for(int i = 0; i < spinner_size; i++) {
            std::cout << "\b" << spinner[i] << std::flush;
            usleep(sleeptime);
        }
    }
}

int main(int argc, char* argv[]) {
    run_spinner(spinner_a, (sizeof(spinner_a) - sizeof(*spinner_a)), 200000);

    return 0;
}
