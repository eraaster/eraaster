#!/bin/bash

# 사용자로부터 "리눅스가 재밌나요?"에 대한 답변 입력 받기
echo "리눅스가 재밌나요? (yes / no): "
read response

# 입력에 따른 멘트 출력
if [ "$response" == "yes" ]; then
    echo "다행이네요."
elif [ "$response" == "no" ]; then
    echo "조금 더 열심히 공부해볼까요?"
else
    echo "유효하지 않은 입력입니다."
fi
