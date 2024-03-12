#!/bin/bash

# DB.txt 파일 확인 및 생성
if [ ! -f "DB.txt" ]; then
    touch "DB.txt"
fi

while true; do
    # 사용자로부터 이름, 생일 또는 전화번호 입력 받기
    echo "이름을 입력하세요 (끝내려면 'exit' 입력): "
    read name
    if [ "$name" == "exit" ]; then
        break
    fi

    echo "생일 또는 전화번호를 입력하세요: "
    read info

    # 정보를 DB.txt 파일에 추가
    echo "$name: $info" >> "DB.txt"
    echo "정보가 DB.txt에 저장되었습니다."
done

# 저장된 정보 출력
echo "DB.txt 파일에 저장된 정보:"
cat "DB.txt"
