#include "common.h"

int main() {
  int writefd;
  int msglen;

  printf("FIFO Client...\n");

  for(int i=0; i<4; i++)
    {

      if((writefd = open(FIFO_NAME, O_WRONLY)) < 0)
	{
	  fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n", __FILE__, strerror(errno));
	  exit(-1);
	}

      long int ttime = time(NULL);
      char* text = ctime(&ttime);

      msglen = strlen(text);
      if(write(writefd, text, msglen) != msglen)
	{
	  fprintf(stderr, "%s: Ошибка записи в FIFO (%s)\n", __FILE__, strerror(errno));
	  exit(-2);
	}
      
      sleep (5);

    }

  close(writefd);

  exit(0);
}
