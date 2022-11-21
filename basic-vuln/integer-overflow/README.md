# Integer overflow?

Trong lập trình máy tính, tràn số nguyên xảy ra khi một phép toán số học cố gắng tạo một giá trị số nằm ngoài phạm vi có thể được biểu thị bằng một số chữ số nhất định – cao hơn giá trị tối đa hoặc thấp hơn giá trị có thể biểu thị tối thiểu.

Trong trò chơi điện tử Donkey Kong, không thể vượt qua level 22 do lỗi tràn số nguyên trong hệ thống đếm thời gian màn chơi. Trò chơi tính toán thời gian cho một màn chơi bằng cách lấy số cấp độ hiện tại của người chơi nhân với 10 sau đó cộng 40. Khi họ đạt đến cấp 22, thời gian cho màn chơi là là 260, quá lớn so với thanh ghi 8-bit (256) của trò chơi, vì vậy giá trị 260 khi bị tràn số sẽ trở thành 260 mod 256 = 4 => thời gian quá ngắn để hoàn thành level.

# Hướng dẫn chạy demo


Để compile code và thực thi chương trình demo chạy lệnh:
```
make
```

# Sponsors

<img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/self/vnpwners.png" alt="vnPwners" width="64" height="64"/> <img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/uit-inseclab/logo_inseclab-03.png" alt="UIT Inseclab" width="64" height="64"/>
