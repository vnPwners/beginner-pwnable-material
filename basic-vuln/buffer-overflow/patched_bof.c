// gcc 

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

char ck1;
char ck2;
char ck3;
char ck4;

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
	srand(time(0));
	setvbuf(stdin, NULL, 2, 0);
	setvbuf(stdout, NULL, 2, 0);
	setvbuf(stderr, NULL, 2, 0);
	char buffer[16] = {0};
	ck1 = 33 + (rand() & 0xff) % 94;
	ck2 = 33 + (rand() & 0xff) % 94;
	ck3 = 33 + (rand() & 0xff) % 94;
	ck4 = 33 + (rand() & 0xff) % 94;
	buffer[16] = ck1;
	buffer[17] = ck2;
	buffer[18] = ck3;
	buffer[19] = ck4;
	printf("Author: th3_5had0w@Sarmat\n");
	printf("\033[0;33mSau khi buffer overflow trở nên phổ biến\n");
	printf("\033[0;33mcác compiler đã thêm cơ chế bảo vệ canary\n");
	printf("\033[0;33mgiúp giảm đáng kể lỗi này trên stack.\n");
	printf("\n");
	printf("\033[0;33mStack canary được mô phỏng bằng minh họa sau:");
	printf("\n\n\n");
	printf("Nhập tên của bạn nè: ");
	int len = read(0, buffer, 0x1000);
	if (buffer[len-1] == 10) buffer[len-1] = '#';
	if (buffer[16] != ck1 || buffer[17] != ck2 || buffer[18] != ck3 || buffer[19] != ck4){
		printBuf(buffer);
		printf("\n\n\n\033[0;31mPhát hiện tấn công tràn bộ đệm!!! >:^|\n");
		exit(1);
	}
	printBuf(buffer);
	printf("\n\n\n\033[0;32mCảm ơn gấc nhìu :>\n");
	exit(0);
}
