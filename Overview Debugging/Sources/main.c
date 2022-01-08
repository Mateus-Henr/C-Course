/*  Author: Mateus Henrique
    Purpose: This program consists of an overview on debugging in C.
*/

/*
    Debugging
    It's the process of finding and fixing errors in a program, being them usually logic errors.
    For syntax errors the compiler is the one how tells you.
    ALWAYS fix the first problem detected.
    The maintenance phase is the most expensive phase of a software cycle (fixing bugs and adding features).

    Common problems
    Logic errors (caught by the programmer)
    Syntax errors (caught by the compiler)
    Memory corruption - Memory leaks, not freeing memory after being used, etc.
    Performance/Scalability - The code works but it's not very efficient, could be a design problem for example.
    Lack of cohesion - A function doing too much or having too much features, some that are never used.
    Tight coupling - A lot of dependencies, dependencies between function, etc.

    Debugging process
    FIRST - Understand the problem.
    SECOND - Reproduce the bug if possible.
    THIRD - Simplify the problem, divide and conque, isolate the source
            Remove parts of the original test case (not testing too much).
            Comment out code (back out changes). Also stubs could be helpful.
            Turn a large program into a lot of small programs (unit testing).
    FOURTH - Identify the origin of the program (in the code). Use debugging tools if necessary.
    FIFTH - Fix the problem. Takes experience and practise. Sometimes includes redesign or refactor of code.
    SIXTH - Now test! Test everything.

    Tecniques and tools
    Using print statements can help isolating errors and show the flow of execution.
    Using debuggers can monitor the exexution of a program, stop it, restart it, set breakpoints, watch variables, etc.
    Using log files can be used for analysis (a bug that's not possible to reproduce). Always add "good" log statements to your code.
    Monitoring software can be used to run-time analysis of memory usage, network traffic, thread and object information.

    Common debugging tools
    Exception handling helps to identify catastrophic errors. But C DOES NOT have it.
    Static analyzers - It analyzes the source code for a specific set of known problems.
                       Semantic checker (doesn't analyse syntaxt just the code, the compiler that analyses syntax).
                       Can detect non-used variables, memory leaks, dead code, deadlocks, unitialized variables, race conditions, etc.
    Test suites - Run a set of comprehensive system end-to-end tests.
    Debugging the problem after it crashed - Analyze the call stack and memory dump (core file).
                                             A core file usually gets generated when the program crashes, it's used to analyze the call stack.

    Prventing errors
    WRITE HIGH QUALITY CODE (follow good design principles and good programming practises).
    Your program must be organized, efficient, easy to maintain, low coupling, very cohesive, etc.
    Unit tests - Automatically executed when compiling. It helps to avoid regression (code previously working), 
                 to find errors in new code before it's delivered and implements the TDD (Test Driven Development) which is
                 when you write the tests first and ONLY then you write the code. LOT OF ADVANTAGES.
                 If you are able of testing code using this method, it means that the code is low coupling, because tests
                 are done in small chunks. FORCES YOURSELF TO FOLLOW GOOD PRACTISES.
    Provide good documentation and proper planning - Write down the design on paper and utilize pseudocode.
    Have a design and conquer approach - Avoid too many changes at once.
                                         As soon as you make a change test it.
                                         Helps reduce the posible sources of bugs since it limits the problem set.
*/

#include <stdio.h>

int main()
{
    return 0;
}