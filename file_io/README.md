# C - File I/O

**File Input/Output (I/O)** in C programming refers to the process of reading from and writing to files. It allows programs to interact with files on the disk, enabling data storage, retrieval, and manipulation.

### Reading from Files
In C, you can read from a file using functions like open(), read(), fgets(), etc. These functions open a file in a specified mode (read, write, append, etc.) and then allow you to read data from it into your program.

### Writing to Files
Similarly, writing to a file in C involves opening the file in a write mode using open() and then using functions like write(), fprintf(), etc., to write data to the file.

### Closing Files
After performing file operations, it's essential to close the file using close() to release the resources associated with it and ensure data integrity.

## Learning Objectives

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Tasks

- Function that reads a text file and prints it to the POSIX standard output.
~~~
ssize_t read_textfile(const char *filename, size_t letters);
~~~
- Function that creates a file.__dlistint_t__ list.
~~~
int create_file(const char *filename, char *text_content);
~~~
-  Function that appends text at the end of a file.
~~~
int append_text_to_file(const char *filename, char *text_content);
~~~
-  Program that copies the content of a file to another file.

