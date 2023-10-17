#!/bin/bash

# 사용자로부터 명령어와 옵션 입력 받기
read -p "실행할 명령어 입력: " command
read -p "옵션 입력 (없으면 엔터): " options

# 함수 정의
execute_command() {
    local cmd="$1"
    local opts="$2"
    
    if [ -z "$opts" ]; then
        $cmd
    else
        $cmd $opts
    fi
}

# 함수 호출하여 명령어 실행
execute_command "$command" "$options"
