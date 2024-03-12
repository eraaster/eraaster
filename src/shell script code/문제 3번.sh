#!/bin/bash

# 사용자로부터 숫자와 연산자 입력 받기
echo "첫 번째 숫자를 입력하세요: "
read num1

echo "두 번째 숫자를 입력하세요: "
read num2

echo "연산자를 입력하세요 (+ 또는 -): "
read operator

# 입력받은 연산자에 따라 연산 수행
if [ "$operator" == "+" ]; then
    result=$((num1 + num2))
    operator_text="덧셈"
elif [ "$operator" == "-" ]; then
    result=$((num1 - num2))
    operator_text="뺄셈"
else
    echo "유효하지 않은 연산자입니다. 스크립트를 종료합니다."
    exit 1
fi

# 결과 출력
echo "계산 결과: $num1 $operator_text $num2 = $result"
