#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>

int main(int argc, char *argv[]){
    setvbuf(stdin, NULL, 2, 0);
    setvbuf(stdout, NULL, 2, 0);
    setvbuf(stderr, NULL, 2, 0);

    printf("Đây là demo kĩ thuật tấn công ret2shellcode\n");
    printf("Giả sử ta có một mảng có độ dài 0x1000 có thể nhập vào, và mảng này có quyền execute\n");
    
    void (*shellcode)();
    shellcode = (void(*) (char *))mmap(NULL, 0x1000, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, 0, 0);    

    printf("%p\n", shellcode);
    
    printf("Địa chỉ của mảng là %p\n", shellcode);
    printf("Ta nhập payload shellcode vào mảng\n");

    read(0, shellcode, 0x1000);

    printf("Giả sử ta có một lỗ hổng, khiến cho ta có thể control được RIP, ta có thể chạy phần mã ta nhập trong mảng shellcode\n");
    printf("Ta có thể khiến cho chương trình trả về cho ta một cái shell bằng cách gọi syscall execve(\"/bin/sh\", 0, 0)\n");
    
    shellcode();
    exit(0);
}
