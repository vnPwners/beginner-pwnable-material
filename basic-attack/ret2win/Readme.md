# Ret2win?

`Ret2win` là kĩ thuật tấn công lợi dụng lỗ hổng phần mềm và ghi đè saved rip của một hàm để điều khiển luồng thực thi của chương trình theo ý muốn. Sử dụng kĩ thuật `ret2win`, kẻ tấn công có thể gọi bất cứ hàm nào có sẵn trong chương trình, biến thể khác nâng cao hơn của kĩ thuật này `ret2libc`. `Ret2win` thường được dùng trong các chương trình có lỗ hổng `stack buffer-overflow`

# Hướng dẫn chạy demo

Để compile chạy lệnh:

```C
make
```

Để chạy file `ret2win`:

```C
./ret2win
```

Để chạy exploit:

```c
./ret2win < payload
```

# Sponsors

<img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/self/vnpwners.png" alt="vnPwners" width="64" height="64"/> <img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/uit-inseclab/logo_inseclab-03.png" alt="UIT Inseclab" width="64" height="64"/>

