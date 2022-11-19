#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int readInt(){
	char *buf = (char*)malloc(0x10);
	size_t len = read(0, buf, 0x10);
	if (len < 0){
		printf("\033[0;31mĐọc input lỗi!\n");
		exit(1);
	}
	return atoi(buf);

}

int main(int argc, char *argv[]){
	setvbuf(stdin, NULL, 2, 0);
	setvbuf(stdout, NULL, 2, 0);
	setvbuf(stderr, NULL, 2, 0);
	unsigned short totalPrice = 0;
	unsigned int x = 0;
	unsigned int y = 0;
	printf("Author: th3_5had0w@Sarmat\n");
	printf("\033[0;33mInteger overflow (lỗi tràn số) xảy ra khi các phép tính toán\n");
	printf("\033[0;33mcho ra kết quả nằm ngoài phạm vi biểu diễn của hệ thống số.\n");
	printf("\033[0;33mInteger overflow có thể khiến chương trình mất đi tính ổn định, logic\n");
	printf("\033[0;33mhay còn có thể dẫn đến các lỗi bảo mật.\n");
	printf("\033[0;33mSau đây là backend xử lý chương trình mua hàng\n");
	printf("\033[0;33mcủa một shop bán quần áo do một anh lập trình viên nghiệp dư tạo ra:\n");
	printf("\n");
	printf("\033[0;33munsigned short totalPrice = 0;\n");
	printf("\033[0;33mtotalPrice += PantPrice * x + ShirtPrice * y;\n");
	printf("\n");
	printf("\033[0;32mCó thể nhận thấy totalPrice là kiểu unsigned short\n");
	printf("\033[0;31m=> totalPrice chỉ biểu diễn được từ 0 đến 65535, nếu lớn hơn\n");
	printf("\033[0;31msẽ chắc chắn xảy ra lỗi tràn số.\n");
	printf("\n");
	printf("\033[0;32mTừ đó một hacker sẽ đặt một số lượng quần áo đủ lớn\n");
	printf("\033[0;32mđể tổng số tiền cần thanh toán tràn qua 65535.\n");
	printf("\n");
	printf("\033[0;33mNhập số lượng quần muốn mua (50$): ");
	x = readInt();
	printf("\033[0;33mNhập số lượng áo muốn mua (60$): ");
	y = readInt();
	printf("\n\n\n");
	totalPrice += x * 50 + y * 60;
	printf("\033[0;32mTổng số tiền phải trả là: %d * 50 + %d * 60 = %hu\n", x, y, totalPrice);
	exit(0);
}
