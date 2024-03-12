#!/bin/bash

# 사용자로부터 숫자 입력 받기
echo "숫자를 입력하세요: "
read number

# 입력받은 숫자만큼 "Hello, World!" 출력
for ((i=1; i<=number; i++))
do
    echo "Hello, World!"
done
