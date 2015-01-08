#include "Simpletron.h"

int main()
{
	Simpletron cpu;
	cpu.Execute();
	cpu.DumpRegisters();
	cpu.DumpMemory();
	return 0;
}