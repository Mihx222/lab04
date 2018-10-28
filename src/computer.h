#pragma once
#include <iostream>
#include <string>

class processor {
public:
	// Constructor prestabilit
	processor() {
		proc_name = "", proc_frequency = "", proc_architecture = "",
			proc_cache = "", proc_process = ""; };
	// Destructor
	~processor() = default;
	// Constructor de initializare
	processor(const char* name_, const char* frequency_,
		const char* architecture_, const char* cache_, const char* process_) :
		proc_name(name_), proc_frequency(frequency_), proc_architecture(architecture_),
		proc_cache(cache_), proc_process(process_) {}

	// Metoda de afisare
	void processor_print() const {
		std::cout << "Denumirea: " << proc_name << "\nFrecventa: " << proc_frequency <<
			"\nArhitectura: " << proc_architecture << "\nMemoria: " << proc_cache <<
			"\nProcesul tehnologic: " << proc_process << std::endl;
	}

	// Metoda de initializare
	void init_processor(const char* name_, const char* frequency_,
		const char* architecture_, const char* cache_, const char* process_) {
		proc_name = name_;
		proc_frequency = frequency_;
		proc_architecture = architecture_;
		proc_cache = cache_;
		proc_process = process_;
	}

protected:
	std::string proc_name, proc_frequency, proc_architecture, proc_cache, proc_process;
};


class computer : processor {
public:
	// Constructor prestabilit
	computer() { gpu = ""; ram = ""; rom = ""; ps = ""; mb = ""; }
	// Destructor
	~computer() = default;
	// Constructor de initializare
	computer(const char* mb_, const char* gpu_, const char* ram_,
		const char* rom_, const char* ps_, const char* processor_name,
		const char* processor_frequency, const char* processor_architecture,
		const char* processor_cache, const char* processor_process) :
		mb(mb_), gpu(gpu_), ram(ram_), rom(rom_), ps(ps_),
		processor(processor_name, processor_frequency, processor_architecture,
			processor_cache, processor_process) {}
	// Constructor de copiere
	computer(const computer& computer_inst) { *this = computer_inst; }

	// Metoda de afisare
	void print() const {
		std::cout << "Calculatorul:\n" << "Placa de baza: " << mb <<
			"\nPlaca video: " << gpu << "\nMemoria operativa: " << ram <<
			"\nMemoria: " << rom << "\nBlocul de alimentare: " << ps <<
			"\nProcesorul:" << std::endl;
		processor_print();
	}

	// Metoda de initializare
	void init(const char* mb_, const char* gpu_, const char* ram_,
		const char* rom_, const char* ps_, const char* processor_name,
		const char* processor_frequency, const char* processor_architecture,
		const char* processor_cache, const char* processor_process) {
		mb = mb_;
		gpu = gpu_;
		ram = ram_;
		rom = rom_;
		ps = ps_;
		init_processor(processor_name, processor_frequency, processor_architecture,
			processor_cache, processor_process);
	}

private:
	std::string gpu, ram, rom, ps, mb;
};