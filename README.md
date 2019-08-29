<<<<<<< HEAD
#simple_shell

## Description
A simple UNIX command interpreter. simple_shell is the user interface to communicate with the operative system services, and also, has his own language (scripting language) called bash scripting , all of this are built in C (C, not C++ ;) ) under the hood.

## Requirements
Gcc (gnu compiler collection) version 4+

## Included .c source code
prototypes.h - For libraries and prototypes
simple_shell.c - main code for the shell
_strcmp.c - source code for string compare
ctrlc.c - source code for avoid the ctrl+c
exit.c - source code for implement the exit function to close the micro shell

## Compiling
gcc -g -Wall -Werror -pedantic *.c -o shell --debug

## Running
./hsh

## Output
For now simple_shell only run with single commands without arguments and you need to specify the folder.

## Example:
=======
Description
A simple UNIX command interpreter. micro_shell is the user interface to communicate with the
operative system services, and also, has his own language (scripting language) called bash scripting
, all of this are built in C (C, not C++ ;) ) under the hood.

Requirements
Gcc (gnu compiler collection) version 4+
Included .c source code
microshell.h - For libraries and prototypes
micro_shell.c - main code for the microshell
_strcmp.c - source code for string compare
_strconcat.c - source code for concatenate strings
ctrlc.c - source code for avoid the ctrl+c
exit.c - source code for implement the exit function to close the micro shell
Compiling
gcc -g -Wall -Werror -pedantic *.c -o shell --debug
Running
./shell
Output
For now Micro_shell only run with single commands without arguments and you need to specify
the folder.

Example:
>>>>>>> d7806105d098b68ab0ad9d9333178acc31f02ea9
$ /bin/ls
for list the files in the current directory or

$ /bin/pwd
for display the current directory address

<<<<<<< HEAD
## How to exit
=======
How to exit
>>>>>>> d7806105d098b68ab0ad9d9333178acc31f02ea9
You have two forms to exit from micro_shell, just type exit

$ exit
You can press CTRL + d

$ ./shell: Success
<<<<<<< HEAD

## Contributors
Pablo Sanchez
Juan Quintero

## Contributing
Pull request are welcome.


=======
>>>>>>> d7806105d098b68ab0ad9d9333178acc31f02ea9
