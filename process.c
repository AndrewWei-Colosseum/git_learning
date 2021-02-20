# Author: Andy Wei 

# OS syscall functionality 

# get rid of this line! ! ! ! !
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <unistd.h>
    
    
    extern int create_process (char* program, char** arg_list);
    
    
    # creating process 
    int create_process (char* program, char** arg_list)
    {
        pid_t child_pid;
        child_pid = fork ();
        if (child_pid != 0)
            return child_pid;
        else {
            execvp (program, arg_list);
            abort ();
        }
   }
