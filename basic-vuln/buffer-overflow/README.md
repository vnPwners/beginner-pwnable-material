# Buffer overflow?

Trong lập trình và bảo mật thông tin, buffer overflow (tràn bộ đệm) là một hiện tượng bất thường xảy ra khi trong qua trình ghi dữ liệu vào buffer (bộ đệm) vượt qua ranh giới của bộ đệm và ghi đè lên các vị trí bộ nhớ lân cận.

Buffer (bộ đệm) là vùng bộ nhớ được dành riêng để chứa dữ liệu, thường là khi di chuyển dữ liệu từ phần này sang phần khác của chương trình hoặc giữa các chương trình. Buffer overflow (tràn bộ đệm) thường xảy ra khi dữ liệu đầu vào không đúng định dạng; nếu ta giả định rằng tất cả đầu vào sẽ nhỏ hơn một kích thước X và buffer được tạo có độ lớn là X, thì một bộ dữ liệu đầu vào có độ lớn là Y với Y > X có thể khiến dữ liệu tràn qua giới hạn của buffer, nếu bộ dữ liệu bất thường này ghi đè lên các vùng bộ nhớ liền kề, điều này có thể dẫn đến hành vi thất thường của chương trình, bao gồm lỗi truy cập bộ nhớ, kết quả không chính xác hoặc crash chương trình.

Tấn công buffer overflow là một kiểu tấn công bảo mật nổi tiếng. Trên nhiều hệ thống, bố cục bộ nhớ của một chương trình hoặc toàn bộ hệ thống đã được xác định rõ. Bằng cách gửi dữ liệu được thiết kế để làm tràn buffer, có thể ghi vào các khu vực chứa mã thực thi và thay thế bằng mã độc hoặc ghi đè có chọn lọc dữ liệu liên quan đến trạng thái của chương trình, do đó khiến chương trình hành vi không mong muốn. Một trong những kỹ thuật tấn công được Morris worm (sâu Morris - 1988) sử dụng là buffer overflow.

# Hướng dẫn chạy demo

Để compile code chạy lệnh:
```
make
```

Để chạy demo buffer overflow không có cơ chế bảo vệ canary:
```
./bof
```

Để chạy demo buffer overflow đã bật cơ chế bảo vệ canary:
```
./bof_patched
```

<img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/self/vnpwners.png" alt="vnPwners" width="64" height="64"/> <img src="https://github.com/vnPwners/collaborators-and-sponsors/raw/main/uit-inseclab/logo_inseclab-03.png" alt="UIT Inseclab" width="64" height="64"/>
