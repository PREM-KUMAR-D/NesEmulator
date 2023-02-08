#pragma once
class Bus;

class kd6502
{
public:
	kd6502();
	~kd6502();

	void ConnectBus(Bus* n) { bus = n; }

};

