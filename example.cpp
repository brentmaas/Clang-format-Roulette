// Source: https://github.com/brentmaas/py

#include <iostream>
#include <chrono>
#include <thread>

const std::string p1l1= " ______                 ";
const std::string p1l2= "/      \\                ";
const std::string p1l3= "| | |  |     _____      ";
const std::string p1l4= "\\_____  \\   /  _  \\   __";
const std::string p1l5= "   |  \\  \\_/  / \\  \\_/ /";
const std::string p1l6= "  /\\   \\_____/   \\____/ ";

const std::string p2l1= " ______                       ";
const std::string p2l2= "/      \\                      ";
const std::string p2l3= "| | |  |       _______        ";
const std::string p2l4= "\\_____  \\     /  ___  \\     __";
const std::string p2l5= "   |  \\  \\___/  /   \\  \\___/ /";
const std::string p2l6= "  /\\   \\_______/     \\______/ ";

const int dl= 6, len1= 24, len2= 30, maxx= 80;
int       x= 80;

int
main(int argc, char ** argv)
{
		using namespace std::chrono_literals;
		std::string l1, l2, l3, l4, l5, l6;
		while (x > -len1) {
				std::string spaces= "";
				for (int i= 0; i < x; i++) { spaces+= " "; }

				if (x > maxx - len1) {
						l1= p1l1.substr(0, maxx - x);
						l2= p1l2.substr(0, maxx - x);
						l3= p1l3.substr(0, maxx - x);
						l4= p1l4.substr(0, maxx - x);
						l5= p1l5.substr(0, maxx - x);
						l6= p1l6.substr(0, maxx - x);
				} else if (x < 0) {
						l1= p1l1.substr(-x);
						l2= p1l2.substr(-x);
						l3= p1l3.substr(-x);
						l4= p1l4.substr(-x);
						l5= p1l5.substr(-x);
						l6= p1l6.substr(-x);
				} else {
						l1= p1l1;
						l2= p1l2;
						l3= p1l3;
						l4= p1l4;
						l5= p1l5;
						l6= p1l6;
				}

				std::cout << spaces << l1 << std::endl;
				std::cout << spaces << l2 << std::endl;
				std::cout << spaces << l3 << std::endl;
				std::cout << spaces << l4 << std::endl;
				std::cout << spaces << l5 << std::endl;
				std::cout << spaces << l6 << std::endl;

				std::this_thread::sleep_for(200ms);

				//	std::cout << "\r\e[A\e[2K\e[A\e[2K\e[A\e[2K\e[A\e[2K\e[A\e[2K\e[A\e[2K";
				std::cout << "\e[2J\e[1;1H" << std::endl;

				x-= dl;

				spaces= "";
				for (int i= 0; i < x; i++) { spaces+= " "; }

				if (x > maxx - len2) {
						l1= p2l1.substr(0, maxx - x);
						l2= p2l2.substr(0, maxx - x);
						l3= p2l3.substr(0, maxx - x);
						l4= p2l4.substr(0, maxx - x);
						l5= p2l5.substr(0, maxx - x);
						l6= p2l6.substr(0, maxx - x);
				} else if (x < 0) {
						l1= p2l1.substr(-x);
						l2= p2l2.substr(-x);
						l3= p2l3.substr(-x);
						l4= p2l4.substr(-x);
						l5= p2l5.substr(-x);
						l6= p2l6.substr(-x);
				} else {
						l1= p2l1;
						l2= p2l2;
						l3= p2l3;
						l4= p2l4;
						l5= p2l5;
						l6= p2l6;
				}

				std::cout << spaces << l1 << std::endl;
				std::cout << spaces << l2 << std::endl;
				std::cout << spaces << l3 << std::endl;
				std::cout << spaces << l4 << std::endl;
				std::cout << spaces << l5 << std::endl;
				std::cout << spaces << l6 << std::endl;

				std::this_thread::sleep_for(200ms);

				//	std::cout << "\r\e[A\e[2K\e[A\e[2K\e[A\e[2K\e[A\e[2K\e[A\e[2K\e[A\e[2K";
				std::cout << "\e[2J\e[1;1H" << std::endl;
		}

		std::this_thread::sleep_for(200ms);

		return 0;
}