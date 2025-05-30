# File---open-read-write-close

### Why files are needed?

When a program is terminated, the entire data is lost. Storing in a file will preserve your data even if the program terminates.

If you have to enter a large number of data, it will take a lot of time to enter them all.

However, if you have a file containing all the data, you can easily access the contents of the file using a few commands in C.

You can easily move your data from one computer to another without any changes.

### Types of Files

When dealing with files, there are two types of files you should know about:

1. Text files

2. Binary files
   
### 1. Text files

Text files are the normal .txt files. You can easily create text files using any simple text editors such as Notepad.

When you open those files, you'll see all the contents within the file as plain text. You can easily edit or delete the contents.

They take minimum effort to maintain, are easily readable, and provide the least security and takes bigger storage space.

### 2. Binary files

Binary files are mostly the .bin files in your computer.

Instead of storing data in plain text, they store it in the binary form (0's and 1's).

They can hold a higher amount of data, are not readable easily, and provides better security than text files.

### File Operations

In C, you can perform four major operations on files, either text or binary:

1. Creating a new file
   
2. Opening an existing file
   
3. Closing a file
   
4. Reading from and writing information to a file

### Working with files

When working with files, you need to declare a pointer of type file. This declaration is needed for communication between the file and the program.

          FILE *fptr;

### Opening a file - for creation and edit

Opening a file is performed using the **fopen()** function defined in the stdio.h header file.

The syntax for opening a file in standard I/O is:

         ptr = fopen("fileopen","mode");
         
**For example,**

         **fopen("E:\\cprogram\\newprogram.txt","w");

         fopen("E:\\cprogram\\oldprogram.bin","rb");
         
Let's suppose the file newprogram.txt doesn't exist in the location E:\cprogram. The first function creates a new file named newprogram.txt and opens it for writing as per the mode 'w'.

The writing mode allows you to create and edit (overwrite) the contents of the file.

Now let's suppose the second binary file oldprogram.bin exists in the location E:\cprogram. The second function opens the existing file for reading in binary mode 'rb'.

The reading mode only allows you to read the file, you cannot write into the file.

### Closing a File

The file (both text and binary) should be closed after reading/writing.

Closing a file is performed using the **fclose()** function.

          fclose(fptr);
          
Here, **fptr** is a file pointer associated with the file to be closed.

### Reading and writing to a text file

For reading and writing to a text file, we use the functions **fprintf() and fscanf()**.

They are just the file versions of **printf() and scanf()**. The only difference is that **fprintf() and fscanf()** expects a pointer to the structure FILE.





