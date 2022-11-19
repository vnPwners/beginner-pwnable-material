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
	printf("Author: th3_5had0w@Sarmat\n");
	printf("\033[0;33mBuffer overflow (lỗi tràn bộ nhớ đệm) xảy ra khi lượng dữ liệu\n");
	printf("\033[0;33mtruyền vào vượt quá khả năng lưu trữ của một vùng bộ nhớ.\n");
	printf("\n");
	printf("\033[0;33mMột trường hợp điển hình của buffer overflow\n");
	printf("\033[0;33msẽ được minh họa bằng ví dụ sau đây.\n");
	printf("\n\n\n");
	printf("Nhập tên của bạn: ");
	int len = read(0, buffer, 0x1000);
	if (buffer[len-1] == 10) buffer[len-1] = '#';
	if (len > 16){
		printBuf(buffer);
		printf("\n\n\n\033[0;31mTràn bộ nhớ đệm rồi X_X\n");
		exit(1);
	}
	printBuf(buffer);
	printf("\n\n\n\033[0;32mCảm ơn gấc nhìu :>\n");
	printf("\n\n\n");
	printf("\033[0;33mMột biến thể khác của buffer overflow:\n");
        printf("\n");
        printf("\033[0;32mchar a[10];\n");
        printf("\n");
        printf("\033[0;31mfor (int i = 0; i <= 10; ++i) a[i] = 0;\n");
        printf("\n\n\n");
        printf("\033[0;33mLập trình viên đã đặt ràng buộc i <= 10 làm điều kiện dừng\n");
        printf("\033[0;33mcủa vòng lặp.\n");
        printf("\n");
        printf("\033[0;31mVì số đếm bắt đầu từ 0 nên việc truy cập a[10] có nghĩa là\n");
        printf("\033[0;31mvị trị thứ 11 trong mảng a sẽ bị truy cập, trong khi đó\n");
        printf("\033[0;31mmảng a chỉ có 10 phần tử.\n");
        printf("\033[0;33m==> Trông có vẻ đây là một lỗi khá ngớ ngẩn nhưng nó xảy ra\n");
        printf("\033[0;33mkhá thường xuyên trong các dự án lớn trên thực tế.\n");
        printf("\033[0;33mLỗi này còn được biết đến với tên là Off-by-one.\n");
	exit(0);
}
