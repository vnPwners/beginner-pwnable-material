#include <stdio.h>

int main(int argc, char *argv[])
{
	setvbuf(stdin, NULL, 2, 0);
	setvbuf(stdout, NULL, 2, 0);
	setvbuf(stderr, NULL, 2, 0);
	printf("Author: th3_5had0w@Sarmat\n");
	printf("\033[0;33mOut of bounds (truy cập ngoài phạm vi cho phép), cái tên đã phần nào\n");
	printf("\033[0;33mgiải thích về lỗi này. Khi lập trình viên đặt ra các ràng buộc không đủ chặt chẽ\n");
	printf("\033[0;33mvề giới hạn, người dùng hay đôi khi là hệ thống xử lý sẽ vô tình truy cập\n");
	printf("\033[0;33mvào những vùng \"không được cho phép\".\n");
	printf("\n\n\n");
	printf("\033[0;33mHãy nhìn vào đoạn code sau:\n");
	printf("\n");
	printf("\033[0;32mint foodChoice = readInt();\n");
	printf("\033[0;31mif (foodChoice > 3)\n");
	printf("\033[0;32m{\n");
	printf("\033[0;32m	printf(\"Invalid food!\");\n");
	printf("\033[0;32m	return 1;\n");
	printf("\033[0;32m}\n");
	printf("\n\n\n");
	printf("\033[0;33mĐoạn code trên mô phỏng một chương trình chọn món ăn\n");
	printf("\033[0;32mnhưng nhà hàng chỉ có 3 món với các lựa chọn là 1, 2, 3.\n");
	printf("\033[0;32mCó thể thấy lập trình viên đã check upper bound (giới hạn trên) là 3\n");
	printf("\033[0;31mnhưng lại không hề check xem liệu biến foodChoice có bé hơn hoặc bằng 0 hay không\n");
	printf("\033[0;33mMà foodChoice lại là biến kiểu int (số có dấu)\n");
	printf("\033[0;31m==> Nhập vào số bé hơn hoặc bằng 0 thì một hacker có thể\n");
	printf("\033[0;31mtruy cập ra ngoài phạm vi mà lập trình viên cho phép.\n");
	printf("\n\n\n");
	printf("\033[0;33mHoặc như đoạn code này:\n");
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
	printf("\033[0;33m");
	printf("\033[0;33m");
}
