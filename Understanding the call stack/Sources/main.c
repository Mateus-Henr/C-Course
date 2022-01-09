/*  Author: Mateus Henrique
    Purpose: This program consists of a description of the call stack in C.
*/

/*
    Understanding the call stack
    A stack trace (call stack (LIFO)) is generated whenever your app crashes because of a control error.
    It shows a list of the function calls that lead to the error.
    Includes filenames and line numbers of the code that cause the exception/error to occur.
    Top of the stack constains the last call that caused the error (nested calls).
    Bottom of the stack constains the first call (usually the "main") that started the chain of calls to cause the error.
    It's important to find the call that caused the error.
    It's possible to see the call stack using "gdb".
    When you build a program you can either build it for release or with debugging information.
    When you build with debugging information, it contains extra information when you compile, so you can see call stack.
    The same thing doesn't occur when it's bulilt for release.
    The call stack can also be seen while debugging by putting a breakpoint for example.
*/

#include <stdio.h>

int main()
{
    return 0;
}