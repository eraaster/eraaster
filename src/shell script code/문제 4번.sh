#!/bin/bash

# 사용자로부터 몸무게(kg)와 신장(cm) 입력 받기
echo "몸무게(kg)를 입력하세요: "
read weight

echo "신장(cm)을 입력하세요: "
read height_cm

# 신장(cm)을 미터(m) 단위로 변환
height=$(bc -l <<< "$height_cm / 100")

# BMI 계산
bmi=$(bc -l <<< "$weight / ($height * $height)")

# BMI 범주 확인
if (( $(bc -l <<< "$bmi < 18.5") )); then
    category="저체중"
elif (( $(bc -l <<< "$bmi >= 18.5 && $bmi < 24.9") )); then
    category="정상"
elif (( $(bc -l <<< "$bmi >= 25 && $bmi < 29.9") )); then
    category="과체중"
else
    category="비만"
fi

# 결과 출력
echo "당신의 BMI: $bmi"
echo "당신은 $category 입니다."
