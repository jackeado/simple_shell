#include "prototypes.h"

/**

* main - entry point of the program

* Return: return 0 if sucess

*/

int main(int argc, char **argv)

{

        char *buffer = NULL,  *token;

        size_t size = 0;

        int status, others, execcheck;

        (void)argc;


        if (argv[1] != NULL)

        {   

                perror("could not open file");

                exit(127);

        }   

        signal(SIGINT, ctrlc);


        while (1) 

        {   

                write(STDIN_FILENO, "$ ", 3); 

                buffer = NULL;

                status = getline(&buffer, &size, stdin);

                if (status < 0)

                {   

                        if (isatty(STDIN_FILENO) != 0 && isatty(STDOUT_FILENO) != 0)

                                putchar('\n');

                        free(buffer);

                        break;

                }   

                token = strtok(buffer, " \n\t");

                exit_func(buffer);

                if (fork() == 0)

                {          

                execcheck = execve(token, argv, NULL);

                        if (execcheck == -1)

                        {

                                perror("./shell");

                                free(buffer);

                                exit(0);

                        }

                }

                else

                {

                        wait(&others);

                }

                free(buffer);

        }

        return (0);

}
