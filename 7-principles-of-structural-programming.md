# Principles of Structured Programming

The formation and development of structured programming is associated with the name of Edsger Dijkstra.

* Principle 1. The use of the unconditional jump operator goto should be abandoned.
* Principle 2. Any program is built from three basic control structures: sequence, branching, cycle.
* Principle 3. In the program, the basic control structures can be nested in each other in an arbitrary way. No other means of controlling the sequence of operations are provided.
* Principle 4. Repetitive fragments of the program can be arranged in the form of subroutines (procedures and functions). In the same way (in the form of subprograms) it is possible to arrange logically integral fragments of the program, even if they are not repeated.
* Principle 5. Each logically complete group of instructions should be arranged as a block. Blocks are the foundation of structured programming.
* Principle 6. All of the listed structures must have one input and one output.
* Principle 7. Program development is carried out step by step, using the top-down method.

Consequences and additions to the above principles:
1. The prohibition on the use of global variables;
2. No more than one exit from the function. An exception is the preliminary check of function arguments;
3. No more than one exit from the loop - it can be either a condition or the break keyword;
4. Nesting of any blocks should not exceed 4;
5. The size of functions is limited by lines and is 40-50 lines.
