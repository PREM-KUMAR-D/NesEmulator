#pragma once
#include<cstdint>
#include<array>
#include"kd6502.h"
class Bus
{
public:
	Bus();
	~Bus();
public: // Devices on bus
	kd6502 cpu;
	
	// Fake RAM 64kb
	std::array<uint8_t, 64 * 1024> ram;


public: // Bus read and write
	void write(uint16_t addr, uint64_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);

};

