#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void win()
{
	printf("Bạn đã gọi hàm win thành công <3\n");
}

void main()
{
    setvbuf(stdin, NULL, 2, 0);
    setvbuf(stdout, NULL, 2, 0);
    setvbuf(stderr, NULL, 2, 0);

    char buffer[32];
    printf("Demo kĩ thuật ret2win\n\n");
    printf("Địa chỉ hàm win: %p\n\n",win);
    printf("Saved rip của hàm main trước khi buffer-overflow: %#llx\n\n",*((long*)buffer+5));
    printf("Nhập dữ liệu: "); 
    read(0,buffer,100);
    printf("\nSaved rip của hàm main sau khi buffer-overflow: %#llx\n\n",*((long*)buffer+5));    
}
