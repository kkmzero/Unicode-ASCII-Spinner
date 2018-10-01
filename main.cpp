#include <iostream>
#include <unistd.h>

int id;

void spinner(int num) {
	unsigned int sleepTime = 200000;

	switch(num) {
		case 0:
			while(1) {
				std::cout << "\b\b\b\b\b[ \\ ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b[ | ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b[ / ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b[ - ]" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 1:
			while(1) {
				std::cout << "\b\\" << std::flush;
				usleep(sleepTime);
				std::cout << "\b|" << std::flush;
				usleep(sleepTime);
				std::cout << "\b/" << std::flush;
				usleep(sleepTime);
				std::cout << "\b-" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 2:
			while(1) {
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b[          ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b[>>        ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b[>>>>>     ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b[>>>>>>>>  ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b[>>>>>>>>>>]" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 3:
			while(1) {
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b(-*--------)" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b(-----*----)" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b(---------*)" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b(--------*-)" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b(---*------)" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b(*---------)" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 4:
			while(1) {
				std::cout << "\b⣾" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⣽" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⣻" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⢿" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⡿" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⣟" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⣯" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⣷" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 5:
			while(1) {
				std::cout << "\b⠁" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⠂" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⠄" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⡀" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⢀" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⠠" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⠐" << std::flush;
				usleep(sleepTime);
				std::cout << "\b⠈" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 6:
			while(1) {
				std::cout << "\b◐" << std::flush;
				usleep(sleepTime);
				std::cout << "\b◓" << std::flush;
				usleep(sleepTime);
				std::cout << "\b◑" << std::flush;
				usleep(sleepTime);
				std::cout << "\b◒" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 7:
			while(1) {
				std::cout << "\b▉" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▊" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▋" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▌" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▍" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▏" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▎" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▍" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▌" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▋" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▊" << std::flush;
				usleep(sleepTime);
				std::cout << "\b▉" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 8:
			while(1) {
				std::cout << "\b┤" << std::flush;
				usleep(sleepTime);
				std::cout << "\b┘" << std::flush;
				usleep(sleepTime);
				std::cout << "\b┴" << std::flush;
				usleep(sleepTime);
				std::cout << "\b└" << std::flush;
				usleep(sleepTime);
				std::cout << "\b├" << std::flush;
				usleep(sleepTime);
				std::cout << "\b┌" << std::flush;
				usleep(sleepTime);
				std::cout << "\b┬" << std::flush;
				usleep(sleepTime);
				std::cout << "\b┐" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 9:
			while(1) {
				std::cout << "\b←" << std::flush;
				usleep(sleepTime);
				std::cout << "\b↖" << std::flush;
				usleep(sleepTime);
				std::cout << "\b↑" << std::flush;
				usleep(sleepTime);
				std::cout << "\b↗" << std::flush;
				usleep(sleepTime);
				std::cout << "\b→" << std::flush;
				usleep(sleepTime);
				std::cout << "\b↘" << std::flush;
				usleep(sleepTime);
				std::cout << "\b↓" << std::flush;
				usleep(sleepTime);
				std::cout << "\b↙" << std::flush;
				usleep(sleepTime);
				}
			break;

		case 10:
			while(1) {
				std::cout << "\b\b\b\b\b\b\b[LEASE]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[EASE ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[ASE W]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[SE WA]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[E WAI]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[ WAIT]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[WAIT ]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[AIT P]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[IT PL]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[T PLE]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[ PLEA]" << std::flush;
				usleep(sleepTime);
				std::cout << "\b\b\b\b\b\b\b[PLEAS]" << std::flush;
				usleep(sleepTime);
				}
			break;
	}

	return;
}

int main()
{
	std::cout << "Enter number to preview spinner type [0 - 10]: ";
	std::cin >> id;
	std::cout << std::endl;

	spinner(id);

	return 0;
}
