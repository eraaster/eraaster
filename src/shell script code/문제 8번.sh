#!/bin/bash

# 사용자로부터 폴더 이름 입력 받기
echo "폴더 이름을 입력하세요: "
read folder_name

# 폴더 생성 및 이동
if [ -d "$folder_name" ]; then
    echo "폴더 '$folder_name'가 이미 존재합니다."
else
    mkdir "$folder_name"
    cd "$folder_name"
    echo "폴더 '$folder_name'가 생성되었습니다."
fi

# 5개 이상의 파일 생성
for i in {1..5}
do
    touch "file$i.txt"
done

# 파일 목록 출력
echo "다음 파일이 생성되었습니다:"
ls

# 각 파일 이름을 사용하여 하위 폴더 생성 및 파일 링크
for i in {1..5}
do
    subfolder_name="folder$i"
    mkdir "$subfolder_name"
    ln -s "../file$i.txt" "$subfolder_name/file$i.txt"
done

# 각 파일이 링크되었는지 확인
for i in {1..5}
do
    file_name="file$i.txt"
    if [ -e "$folder_name/folder$i/$file_name" ]; then
        echo "파일 '$file_name'은 폴더 'folder$i'에 링크되었습니다."
    else
        echo "파일 '$file_name'은 폴더 'folder$i'에 링크되지 않았습니다."
    fi
done

# 결과 출력
echo "하위 폴더와 파일들을 생성하고 링크했습니다."
