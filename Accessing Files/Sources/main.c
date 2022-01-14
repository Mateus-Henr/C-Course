/*  Author: Mateus Henrique
    Purpose: The purpose of this program is show how to access files in C.
*/

/*
    Accessing files
    Files on a disk have a name and the rules for naming files are determined by your OS.
    The names may have to be adjusted depending on the OS that the programming is running on.
    For example the directory structure differs depending on the OS.
    A program references a file through a file pointer (or stream pointer).
    The file pointer is associated with a file programmatically when the program runs.
    Pointers can be reused to point to different files on different occasions.
    These pointers are usually of type "File".

    File pointer
    A file pointer points to a struct of type "FILE" that represents a stream, which contains
    infromation about the file, such as if you want to read or write, the address of the
    buffer in memory to be used for data and a ponter to the current position in the file.
    These operations can be set using input/output file operations.
    
    Using several files
    In order to use multiple files, it's necessary to create a separate file pointer for each
    file.
    There's a limit to the number of files that you can have opened at one time, it's defined
    as "FOPEN_MAX" in the "stdio.h" header file.
    Since operations in files are expensive, it's not wise to do multiple at once.

    Opening a file
    To open a file, it's necessary to associate a specific external file name with an internal
    file pointer variable through a process referred to as opening a file.
    Basically, by using the "fopen()" function it's possible to open a file and this function
    returns a pointer for that file, which can be later used for doing operations on it.
    
    fopen()
    The first argument is a pointer to a string that is the name of the external file,
    you can either specify it explicitly or using a pointer to a string with the name.
    By having it this way, we can obtain the file name as input from the user, for example.
    The second argument is a character string (double quotes) the represents the file mode 
    (operation).
    If the call to "fopen()" is successful, the function returns a pointer of type "FILE *"
    that can be used for operations. If it fails, it returns NULL. Remember to check for NULL.

    File modes
    "w" - Opens a text file for write operations. Of the file exists, its current contents are
          discarded. Creates the file if it doesn't exist.
    "a" - Open a text file for append operations. All writes are to the end of the file.
          if the file doesn't exist it creates a new one.
    "r" - Open a file for read operations.
    "w+" - Open a file for update (reading or writing), first trucating the file to zero if it 
           exists or creaign the file if it doesn't exist.
    "a+" - Open a text file for update (reading or writing) appending to the end of the existing
           file or creating if it doesn't exist.
    "r+" - Open a file for update (reading or writing).
    OBS: The "+" is basically for creating a file that doesn't exist, apart from "r+".
    Example below.

    Path
    If no path is provided, the program is going to assume that the file is in the current
    directory where the program is.
    It's also possible to specify a s full path for the file, however this vary depending on the OS.
    The full path is called absolute path. When providing no path we have the relative path (relative
    to where the program is running). Relative path is usually better since the directory structure
    of the user is probably different from yours. To go back directories using a relative path we use
    "..\\" on Windows (escaping a backslash with another backslash).

    Renaming a file
    To rename a file we can use the "rename()" function.
    It's necessary to pass to parameters to it, being them, the old name of the file (current name)
    as the first parameter and as the second parameter the new name for the file.
    If the operation was successfull it'll return 0, otherwise it'll be a nonzero value.
    The rename will fail if tried to use while the file's opened (because it's in use).
    Example below.

    Closing a file
    When you have finished with a fie, you must tell the OS to close it, through the "fclose()"
    function.
    It accepts a file pointer as an argument.
    Returns EOF if an error occurs. It is defined in "stdio" as -1.
    If the operation was successful, it returns 0.
    After closing the file REMEMBER to set the pointer to NULL, to indicate that you are not
    using the pointer anymore.
    If the file was being written to, the current contents of the output buffer are written
    to the file to ensure that data is not lost, in other words, you are not closing the file
    if it was being written in another thread (thread safe).

    Deleting a file
    The file must not be open to be deleted, so a string with containing the name of the
    file or full path up to the file must be specified.
    It's quite important to double check if a file has been deleted since this operation
    is very heavy.
    Returns 0 if successful and a non-zero value otherwise.

    GOOD PRACTISE
    ALWAYS CLOSE THE FILE AND ALWAYS SET THE POINTER TO NULL.
    ALSO IT HAS TO BE CLOSE BEFORE TRYING TO RENAME OR REMOVE IT.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *pFile = NULL;
    char *fileName = "myfile.txt";

    // Opening for only writing operation. Also creates the file if it doesn't exist.
    // The difference between this and "w+" is that this one doesn't set the current
    // position in the file to 0.
    pFile = fopen(fileName, "w");

    if (!pFile) // Always check.
    {
        printf("Failed to open %s.\n", fileName);
        return -1;
    }

    // Opening a file in append mode. All operations will be at the end of the file.
    // It's not possible to update existing contents in this mode.
    pFile = fopen(fileName, "a");

    if (!pFile) // Always check.
    {
        printf("Failed to open %s.\n", fileName);
        return -1;
    }

    // Opening a file for reading. Read only.
    // File must exist. Here the file exists because past operations are creating it.
    // This positions the file to the beginnign of its data.
    pFile = fopen(fileName, "r");

    if (!pFile) // Always check.
    {
        printf("Failed to open %s.\n", fileName);
        return -1;
    }

    // Closing the file in order to rename it.
    // Never forget.
    fclose(pFile);
    pFile = NULL;

    char newFileName[] = "mynewfile.txt";

    if (rename(fileName, newFileName))
    {
        printf("Failed to rename file.");
    }
    else
    {
        printf("File renamed successfully.");
    }

    if (remove(newFileName))
    {
        printf("Failed to delete file.");
    }
    else
    {
        printf("File delete successfully.");
    }

    return 0;
}