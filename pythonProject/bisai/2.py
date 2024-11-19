import os
import sys

def is_super_phone_number(phone_number):
    # 创建一个集合来存储遇到的数字
    seen_digits = set()
    for digit in phone_number:
        if digit in seen_digits:
            return True
        seen_digits.add(digit)  # 记录这个数字
    return False

# 读取输入
N = int(input().strip())
super_phone_count = 0

for _ in range(N):
    phone_number = input().strip()
    if is_super_phone_number(phone_number):
        super_phone_count += 1  # 计数超级手机号

# 输出结果
print(super_phone_count)
