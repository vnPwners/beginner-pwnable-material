// gcc 

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void printBuf(char buf[]){
	printf("\033[0;32m        ");
	for (int i = 0; i < 20; ++i){
		if (i < 16) printf("\033[0;32m___ ");
		else printf("\033[0;31m___ ");
	}
	printf("\n");
	printf("\033[0;32m       |");
	for (int i = 0; i < 20; ++i){
                if (i < 16) printf("\033[0;32m   |");
                else printf("\033[0;31m   |");
        }
	printf("\n");
	printf("\033[0;33mbuffer ");
	printf("\033[0;32m|");
	for (int i = 0; i < 20; ++i){
		if (i < 16){
			if (buf[i] != 0 && buf[i] != 10) printf("\033[0;32m %c |", buf[i]);
			else printf("\033[0;32m   |");
		}
		else {
		       	if (buf[i] != 0 && buf[i] != 10) printf("\033[0;31m %c |", buf[i]);
			else printf("\033[0;31m   |");
		}
	}
	printf("\n");
	printf("\033[0;32m       |");
        for (int i = 0; i < 20; ++i){
                if (i < 16) printf("\033[0;32m___|");
                else printf("\033[0;31m___|");
        }
	printf("\n");
}

int main(int argc, char *argv[]){
	setvbuf(stdin, NULL, 2, 0);
	setvbuf(stdout, NULL, 2, 0);
	setvbuf(stderr, NULL, 2, 0);
	char buffer[16] = {0};
	printf("Nhập tên của bạn nè: ");
	int len = read(0, buffer, 0x1000);
	if (buffer[len-1] == 10) buffer[len-1] = '#';
	if (len > 16){
		printBuf(buffer);
		printf("\n\n\n\033[0;31mTràn bộ nhớ đệm rồi X_X\n");
		exit(1);
	}
	printBuf(buffer);
	printf("\n\n\n\033[0;32mCảm ơn gấc nhìu :>\n");
	exit(0);
}
