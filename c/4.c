#include <stdio.h>
#include <unistd.h>
int main()
{
        while(1)
        {
                fprintf(stdout,"hello-out\n");  // \n forces a buffer flush.
                fprintf(stderr,"hello-err");
                sleep(1);
        }
        return 0;
}