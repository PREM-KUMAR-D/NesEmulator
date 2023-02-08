# Nes Emulator Learning
---
## 6502 CPU

- 16 bit address
- 8 bit data
- can write address to the bus
- can read and write data to the bus
- 56 legal instructions
- each instruction has a size and duration(clock cycles)

### Instruction type

- LDA $41 2-BYTE (IMMEDIATE ADDRESSING MODE) [ OPERAND OPCODE ]
- LDA $0105 3-BYTE ( ABSOLUTE ADDRESSING )
- CLC 1-BYTE

For a given instruction we need to implement the function + addressing mode + cycles  

### Register 
- [ 8 BIT ] A (accumulator) 
- [ 8 BIT ] X 
- [ 8 BIT ] Y 
- [ 8 BIT ] stkp STACK POINTER  
- [ 16 BIT ] pc PROGRAM COUNTER ( contains the next byte of instruction )
- [ 8 BIT ] status STATUS REGISTER ( check for various operations like carry, enable/disable interrupts and zero compare )

since insrutction can be 1,2 or 3 bytes we might need several clock cycles

---
## Main bus

- has address and data lines


## RAM

- 64 kb




## REFERENCES 
[Why use unint_x variables](https://stackoverflow.com/questions/14911813/what-is-the-difference-between-an-uint32-and-an-unsigned-int-in-c)
[Where should we use auto and how](https://stackoverflow.com/questions/29859796/c-auto-vs-auto)
[What are forward declarations ? and where are they used](https://stackoverflow.com/questions/4757565/what-are-forward-declarations-in-c)
[Circular Dependecy related to forward declarations](https://stackoverflow.com/questions/625799/resolve-build-errors-due-to-circular-dependency-amongst-classes)
