🔅 Low Level Programming In C 🔅

In addition to the high level language constructs, (data type and operators), C also supports low level programming features which enable the programmer to carry out bit-wise operations. These features are normally provided in assembly language or machine language. The bit level operations and register variables discussed in this section can be thought of as a bridge between high level programming constructs and assembly / machine language operations.

Thus one can directly store and manipulate variables stored in the CPU registers and use that result in another subprogram.

Register Variables
Earlier, we have seen that C supports four different storage classes, viz. static, auto, extern and register. As such, general purpose registers are special storage areas within the Central Processing Unit (CPU). The CPU registers are used for temporarily holding intermediate results generated by the Arithmetic Logic Unit (ALU). It also stores information that are transferred from the main memory of the computer for further processing, this reduces the traffic between CPU and RAM which inevitably leads to higher degree of efficiency.

In C, the content of register variables reside inside registers. A program that uses register variables execute faster since their values are stored inside the registers within the CPU rather than in the RAM. A variable can be declared of storage class type register by prefixing the variable declaration by the keyword register. For example,

register int cnt = 0;
However, only a few register variables can effectively be used in a C function. The exact number of register variable declarations possible in a function is Machine dependent. The scope of a register variable is identical to that of auto type variables.

It is not always the case that a variable defined to be of storage class register has to be a register variable only. The declaration is valid only when the requested register space is available, otherwise the variable declared to have storage class register, will be treated as automatic variable only. The important distinction between an automatic and register variable is that a register variable can never be preceded by the unary operator because a register variable does not have a l-value.


Bitwise Operators
C allows the manipulation of individual bits within a word (register) of computer memory. Such bit level operations enable programmers to develop machine-level applications easily and efficiently.

Operators such as one's complement operator, the logical operator, and shift operators can be used in combination with other operators in an expression.


The one's complement operator (~)
The unary operator (the tilde symbol ~) complements each individual bit of its operand so that 1�s become 0's and 0's become 1's. The operator precedes the operand, where the operand is always an integer quantity (an unsigned octal or unsigned hexadecimal numbers)
