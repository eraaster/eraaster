#!/bin/bash

# 사용자로부터 폴더 이름 입력 받기
echo "폴더 이름을 입력하세요: "
read folder_name

# 폴더 존재 여부 확인 및 생성
if [ -d "$folder_name" ]; then
    echo "폴더 '$folder_name'가 이미 존재합니다."
else
    mkdir "$folder_name"
    echo "폴더 '$folder_name'가 생성되었습니다."
fi

# 5개의 파일 생성
cd "$folder_name"
for i in {1..5}
do
    touch "file$i.txt"
done

# 파일 목록 출력
echo "다음 파일이 생성되었습니다:"
ls

# 파일들을 압축
zip -r "$folder_name.zip" ./

# 압축 해제할 새로운 폴더 생성
unzip_folder="$folder_name-unzip"
mkdir "$unzip_folder"

# 압축 해제
unzip "$folder_name.zip" -d "$unzip_folder"

# 결과 출력
echo "압축 파일이 '$unzip_folder' 폴더에 압축 해제되었습니다."
