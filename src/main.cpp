#include "computer.h"

int main() {
	computer comp("Asus Prime Z370", "Asus GTX 1060 O6G Dual", "Kingston DDR4 2400MHz 16GB, 8+8",
		"Samsung SSD 850 Pro 256GB SATA3 + Seagate Barracuda 1TB, 7200rpm SATA3",
		"GAMEMAX RGB 850W, 80+ Gold", "Intel i5-8600K", "3.6 GHz - 4.3 Ghz", "Coffee Lake x64-bit",
		"L1 cache - 384Kb, L2 cache - 1.5Mb, L3 cache - 9Mb", "14 nm");
	comp.print();
	std::cin.get();
}