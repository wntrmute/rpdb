#include <iostream>
#include <string>

#include <gflags/gflags.h>


// tbh I should probably just have this somewhere useful


DEFINE_double(voltage, 5.0, "Set the input voltage for the circuit.");
DEFINE_double(r_added, 0, "Add additional resistance to the network (e.g. via serial resistor)");


int
main(int argc, char **argv)
{
	double	sum = 0;
	double	prod = 1;
	double	temp;
	double	network;
	gflags::ParseCommandLineFlags(&argc, &argv, true);
	network = FLAGS_r_added;

	if (argc > 2) {
		for (int i = 1; i < argc; i++) {
			temp = std::stod(argv[i]);
			sum += temp;
			prod *= temp;
		}

		network += (prod / sum);
	} else {
		std::cout << "single resistor: not networking\n";
		if (argc > 1) network += std::stod(argv[1]);
	}
	std::cout << "R_net = " << network << std::endl;
	std::cout << FLAGS_voltage << "V / " << network << "Ω = " << FLAGS_voltage / network << "A\n";
}
