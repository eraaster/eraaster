## Minyoung Lee

👩‍💻 Soongsil University, AI Software<br>
✉️ eraaster@naver.com<br>
📚 [Tech Blog](https://velog.io/@eraaster/posts) &nbsp;🔗 [LinkedIn](https://www.linkedin.com/in/%EB%AF%BC%EC%98%81-%EC%9D%B4-0a1595427/)

💡 서비스가 멈추지 않도록, 안정적인 인프라를 만드는 엔지니어가 되고자 합니다.

<br>

## 🛠️ Tech Stack

![AWS](https://img.shields.io/badge/AWS-232F3E?style=flat-square&logo=amazonaws&logoColor=white)
![Terraform](https://img.shields.io/badge/Terraform-844FBA?style=flat-square&logo=terraform&logoColor=white)
![Kubernetes](https://img.shields.io/badge/Kubernetes-326CE5?style=flat-square&logo=kubernetes&logoColor=white)
![Amazon EKS](https://img.shields.io/badge/Amazon%20EKS-FF9900?style=flat-square&logo=amazoneks&logoColor=white)
![Docker](https://img.shields.io/badge/Docker-2496ED?style=flat-square&logo=docker&logoColor=white)
![Helm](https://img.shields.io/badge/Helm-0F1689?style=flat-square&logo=helm&logoColor=white)
![Argo CD](https://img.shields.io/badge/Argo%20CD-EF7B4D?style=flat-square&logo=argo&logoColor=white)
![GitLab CI](https://img.shields.io/badge/GitLab%20CI-FC6D26?style=flat-square&logo=gitlab&logoColor=white)
![Prometheus](https://img.shields.io/badge/Prometheus-E6522C?style=flat-square&logo=prometheus&logoColor=white)
![Grafana](https://img.shields.io/badge/Grafana-F46800?style=flat-square&logo=grafana&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black)
![OpenStack](https://img.shields.io/badge/OpenStack-ED1944?style=flat-square&logo=openstack&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)

<br>

## 💼 Experience

### 🏢 아크릴(Acryl) — ICT 학점연계 프로젝트 인턴십
Period: 2026.09 ~ 현재<br>
Part: GPUBASE 멀티 클러스터 GPU 스케줄링 검증

### ☁️ CJ올리브네트웍스 Cloud Wave 부트캠프 7기
Period: 2025.12 ~ 2026.02<br>
Part: 클라우드 인프라 · DevOps

### 📦 숭실대학교 Co-op SAP Track
Period: 2025.09 ~ 2025.12<br>
Part: SAP MM 모듈 · ABAP Cloud

<br>

## 🏆 Award

### 🏅 KT IT 서포터즈 KIT 3기
충청남도 교육감 표창

Activity: 도서·산간 지역 청소년 대상 AI 교육봉사<br>
Organization: KT<br>
Period: 2025.05 ~ 2025.09

<br>

## 📜 Certificate

### ☁️ Cloud & Infra
| Certificate | Issuer | Acquired |
|:---|:---|:---:|
| HashiCorp Certified: Terraform Associate | HashiCorp | 2026.07.07 |
| Kubernetes and Cloud Native Associate (KCNA) | Linux Foundation | 2026.04.05 |
| AWS Certified Solutions Architect – Associate | AWS | 2026.02.14 |
| AWS Certified AI Practitioner | AWS | 2026.08.19 |
| AWS Certified Cloud Practitioner | AWS | 2025.07.28 |
| 리눅스마스터 2급 | 한국정보통신진흥협회 (KAIT) | 2026.04.03 |
| 네트워크관리사 2급 | 한국정보통신자격협회 (ICQA) | 2026.09.22 |

### 📊 Data & Etc.
| Certificate | Issuer | Acquired |
|:---|:---|:---:|
| ADsP (데이터분석 준전문가) | 한국데이터산업진흥원 (KDATA) | 2026.08.28 |
| SQLD (SQL 개발자) | 한국데이터산업진흥원 (KDATA) | 2025.09.19 |
| SAP Certified Associate – Back-End Developer – ABAP Cloud | SAP | 2025.12.13 |

<br>

## 💻 Project

| Period | Project | Description | Role |
|:---:|:---|:---|:---:|
| 2026.03<br>~ 2026.06 | **CORE** | CPU 스크리닝 기반 GPU 자원 효율형 위성영상 재난 탐지 시스템 | Infra · DevOps |
| 2025.12<br>~ 2026.02 | **올리브영 세일 대응 인프라** | Zero Trust 기반 고가용성 EKS 인프라 · 서울–도쿄 멀티리전 DR | DR · AI 보안 파이프라인 |
| 2025.09<br>~ 2025.12 | **SAP MM 구매 프로세스** | 구매처 생성 → 구매오더 → 입고 → 송장 처리 ABAP 개발 | Backend (ABAP) |

<details>
<summary><b>🛰️ CORE 상세</b></summary>
<br>

- 경량 ResNet18로 1차 스크리닝 후 위험 지역만 고정밀 모델로 추론하는 2단계 파이프라인
- `Karpenter`로 GPU 노드를 요청 시에만 프로비저닝 (평상시 0개, Scale-to-Zero) + `HPA` 오토스케일링
- `Terraform` IaC, `GitLab CI → ECR → ArgoCD → EKS` GitOps 무중단 배포
- `IRSA` 자격증명 관리, `DCGM + Prometheus + Grafana` GPU 실시간 모니터링

</details>

<details>
<summary><b>🛒 올리브영 세일 대응 인프라 상세</b></summary>
<br>

- `Route53` Health Check 기반 서울–도쿄 Warm Standby 자동 Failover
- `VPC Flow Logs → Kinesis → SageMaker(XGBoost) → Lambda → Slack` 이상 트래픽 탐지 파이프라인
- 150,000 VU 부하테스트: OOMKilled **0건** · 5xx **0건** · P99 **≤ 180ms**

</details>

<br>

## 🤝 Activities

| Period | Activity | Description |
|:---:|:---|:---|
| 2026 ~ 현재 | **Cloud Club 10기** | - |
| 2025.09 ~ 2025.12 | **AWS Cloud Club 3기** | - |
| 2025.05 ~ 2025.09 | **KT IT 서포터즈 KIT 3기** | 도서·산간 청소년 AI 교육봉사 |
| 2024.03 ~ 2024.06 | **LG CNS AI Genius 11기** | 중학생 SW·AI 교육봉사 |
| 2023.09 ~ 2023.12 | **코드하나 코드원 3기** | 초등 SW 교육봉사 |
