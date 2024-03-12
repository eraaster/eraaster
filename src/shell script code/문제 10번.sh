#!/bin/bash

# DB.txt 파일 확인
if [ ! -f "DB.txt" ]; then
    echo "DB.txt 파일이 존재하지 않습니다."
    exit 1
fi

# 사용자로부터 검색할 이름 입력 받기
echo "검색할 이름을 입력하세요: "
read search_name

# DB.txt 파일에서 이름으로 검색하여 정보 확인
found=false
while IFS= read -r line; do
    name=$(echo "$line" | cut -d ':' -f 1)
    info=$(echo "$line" | cut -d ':' -f 2)
    
    if [ "$name" == "$search_name" ]; then
        echo "검색 결과:"
        echo "이름: $name"
        echo "정보: $info"
        found=true
    fi
done < "DB.txt"

if [ "$found" == false ]; then
    echo "검색 결과: 해당 이름을 찾을 수 없습니다."
fi
