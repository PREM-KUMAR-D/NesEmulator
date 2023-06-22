#include "Bus.h"

Bus::Bus()
{
	// Clear the RAM contents
	// auto& is copy by references
	for (auto& i : ram) i = 0x00;

	// Connect cpu to the bus
	cpu.ConnectBus(this);
}

Bus::~Bus()
{
}


void Bus::write(uint16_t addr, uint64_t data)
{
	if (addr >= 0x0000 && addr <= 0xFFFF)
		ram[addr] = data;
}

uint8_t Bus::read(uint16_t addr, bool bReadOnly = false)
{
	if (addr >= 0x0000 && addr <= 0xFFFF)
		return ram[addr];
	return 0x00;
}