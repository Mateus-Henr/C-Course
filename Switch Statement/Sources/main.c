/*  Author: Mateus Henrique
    Purpose: This program has as objective the demonstration of the switch statement.
*/

/*
    Switch Statement
    This is a statement that is recommended to use when we have multiple conditions.
    So, instead of using multiple ifs we use this statement and it helps to make your code cleaner and more readable.
    Also, it's more efficient.
    You can only use this statement when you want to compare against CONSTANT values.

    Structure
    switch (expression)
    {
        case value1:
            program statement;
            ......;
            break;
        case valueN:
            program statement;
            ......;
            break;
        default:
            program statement;
            ......;
            break;
    }
    Terms
    "case" - Can be compared to an if statement, it'll look at the value of the variable and if it's the same value specified in the
    case, then it'll execute te code enclosed by the case.
    "break" - This keyword is important because without it, the execution will fall into the other cases.
    "default" - It's an "else", this keyword has the purpose of executing its code, if any of the cases were matched.
    "expression" - This will be the variable that you want to compare against the cases.


    Goto statement
    This is used to go to a specific line, because of that is EXTREMELY HARD to maintain. NEVER USE IT. 
    The only usage that might be "handy" is to jump out of multiple loops at once, instead of having to set flags.
*/

#include <stdio.h>

int main()
{
    // Displaying a switch statement that compares an enum.
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch (today)
    {
        case Sunday:
            printf("Today is Sunday.\n");
            break;
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        case Wednesday: // When you want the same output for cases you can use this structure.
        case Thursday:
            printf("Wednesday or Thursday.\n");
            break;
        default:
            printf("Whatever.\n");
            break;
    }

    return 0;
}