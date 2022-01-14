/*  Author: Mateus Henrique
    Purpose: The purpose of this program is to give a general overview on file input and output.
*/

/*
    The fact that just by using memory, if it goes away all the data that you had during the
    program also goes away. Due to this fact, the idea of using files for saving data gets
    interesting.
    Serious business applications require more data than would fit into main memory, and
    they also depend on the ability to process data that is persistent and stored on an
    external device such as a disk drive.
    Even though fetching data from a hard drive is slower, it gives us the possibility of
    managing big chunks of data.

    C provides functions in the header file "stdio.h" for writing and reading from external
    devices, which is typically a hard drive, but it can be any other virtual external
    storage device (usb drive, ssd drive, etc).
    The udeua of losing memory when the program ends is called "volatile memory", the data
    is not persistent.

    Files
    It's a permanent storage, therefore, "non-volatile memory".
    A file is usually stored on a disk or ssd.
    C views a file as a continuous sequence of bytes, in other words, each byte can be read
    individually. The structure corresponds to the file structure in the Unix environment.

    Inside the file
    At the beginning of the file is where we can find the byte 0 and the rest are placed
    according with their position in the file.
    For any actions in the file, the current position will be where the action is going to
    start from, the action can be read or write, for example.
    The current position can be moved to wherever you want.

    Types of files
    Text file - Text data is written as a sequence of characters organized as lines.
                May vary from system to system because of some formats/characters.
    Binary - It's written as a series of bytes exactly as they appear in memory.
             Some examples are image data, music enconding, etc.
             There are not human readable.
             This is a faster approach since data doesn't need to be converted.
             In order to read something from it, you have to understand the organization
             of the data in there.

    EOF
    It stands for "End Of File" that marks the final of the file.

    Streams
    This term can represent any kind of input.
    It's an abstract representation of any external source or destination for data.
    The keyboard, files and the command lien are examples of things that can work with streams.
    C library provides funtions for reading and writing to or from data streams. It's possible
    to use the same output/input functiosn for these actions that are mapped to a stream.
    C programs automatically open three streams on you behalf:
    Standard input - Normal input device for your system, usually the keyboard ("scanf()").
    Standard output - Usually your display screen ("printf()").
    Standard error - Usually your display screen.
                     The purpose of it is to provide a logically distinct place to send error
                     messages.
*/

#include <stdio.h>

int main()
{
    return 0;
}