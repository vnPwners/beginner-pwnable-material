#include <stdio.h>

int main(int argc, char *argv[])
{
	setvbuf(stdin, NULL, 2, 0);
	setvbuf(stdout, NULL, 2, 0);
	setvbuf(stderr, NULL, 2, 0);
	printf("Author: th3_5had0w@Sarmat\n");
	printf("\033[0;33mTypecasting-error (lỗi ép kiểu dữ liệu) là một loại lỗi tuy gặp nhiều trong các project lớn\n");
	printf("\033[0;33mnhưng ít được nêu tên vì hiếm khi nó cho phép hacker chiếm quyền điều khiển tiến trình mà\n");
	printf("\033[0;33mđa số chỉ gây nên các lỗi crash hệ thống trong một số điều kiện nhất định và các lập trình viên\n");
	printf("\033[0;33mcó thể sửa chữa nhanh chóng.\n");
	printf("\033[0;32m[*] Ấn phím bất kì để tiếp tục...\n");
	getchar();
	printf("\033[0;33mHãy cùng kiểm tra xem thử đoạn code sau:\n");
	printf("\n\n\n");
	printf("\033[0;32mint readInt(){\n");
	printf("\033[0;32m	char *buf = (char*)malloc(0x10);\n");
	printf("\033[0;32m	size_t len = read(0, buf, 0x10);\n");
	printf("\033[0;32m	if (len < 0){\n");
	printf("\033[0;32m		printf(\"Đọc input lỗi!\\n\");\n");
	printf("\033[0;32m		exit(1);\n");
	printf("\033[0;32m	}\n");
	printf("\033[0;32m	return atoi(buf);\n");
	printf("\033[0;32m}\n\n");
	printf("\033[0;31mbool checkValid(unsigned char Value)\n");
	printf("\033[0;32m{\n");
	printf("\033[0;32m	if (Value == 0x48)\n");
	printf("\033[0;32m	{\n");
	printf("\033[0;32m		printf(\"Valid!!!\\n\");\n");
	printf("\033[0;32m		return 1;\n");
	printf("\033[0;32m	}\n");
	printf("\033[0;32m	else\n");
	printf("\033[0;32m	{\n");
	printf("\033[0;32m		printf(\"Invalid!!!\\n\");\n");
	printf("\033[0;32m		return 0;\n");
	printf("\033[0;32m	}\n");
	printf("\033[0;32m}\n\n");
	printf("\033[0;32mvoid doMagic(int secretVal){...}\n\n");
	printf("\033[0;32mint main()\n");
	printf("\033[0;32m{\n");
	printf("\033[0;32m	int secretVal = readInt();\n");
	printf("\033[0;31m	if (checkValid(secretVal))\n");
	printf("\033[0;32m	{\n");
	printf("\033[0;31m		doMagic(secretVal);\n");
	printf("\033[0;32m	}\n");
	printf("\033[0;32m}\n\n\n");
	printf("\033[0;32mHãy tạm dừng và thử suy đoán xem đoạn code trên có lỗi ở đâu?\n");
	printf("\033[0;32m[*] Ấn phím bất kì để tiếp tục...\n");
	getchar();
	printf("\033[0;33msecretVal là biến kiểu int mang giá trị do người dùng nhập vào sau đó\n");
	printf("\033[0;33mđược check bằng hàm checkValid, tuy nhiên kiểu dữ liệu của tham số\n");
	printf("\033[0;33mmà checkValid nhận vào là unsigned char, vậy khi gọi checkValid(secretVal)\n");
	printf("\033[0;33mthì sẽ xảy ra lỗi ép kiểu từ int -> unsigned char để thỏa mãn kiểu dữ liệu\n");
	printf("\033[0;33mcủa tham số.\n\n");
	printf("\033[0;31m==> Hacker chỉ cần nhập vào số kiểu int có byte cuối là 0x48 sẽ bypass được\n");
	printf("\033[0;31mhàm checkValid, sau đó giá trị secretVal sẽ được truyền vào hàm doMagic theo kiểu int\n");
	printf("\033[0;31mcó thể gây ra lỗi crash chương trình trong quá trình xử lý hoặc hơn nữa.\n");
}
