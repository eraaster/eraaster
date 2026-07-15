<div align="center">

# 👋 안녕하세요

---

## 🧑‍💻 소개

- 🎓 숭실대학교 AI소프트웨어학부 재학 (2023.03 ~ 2027.02 졸업예정)
- ☁️ **AWS · Kubernetes · IaC · GitOps** 기반의 인프라 설계/운영에 관심
- 🔭 관측 가능성(Observability), 비용 최적화, 무중단 배포를 고민합니다
- 📚 IT 교육 봉사 3회 · 충청남도 교육감 표창 수상

---

## 🛠️ 기술 스택

**클라우드 & 인프라**

![AWS](https://img.shields.io/badge/AWS-232F3E?style=flat-square&logo=amazonaws&logoColor=white)
![Terraform](https://img.shields.io/badge/Terraform-844FBA?style=flat-square&logo=terraform&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black)

**컨테이너 & 오케스트레이션**

![Docker](https://img.shields.io/badge/Docker-2496ED?style=flat-square&logo=docker&logoColor=white)
![Kubernetes](https://img.shields.io/badge/Kubernetes-326CE5?style=flat-square&logo=kubernetes&logoColor=white)
![Amazon EKS](https://img.shields.io/badge/Amazon%20EKS-FF9900?style=flat-square&logo=amazoneks&logoColor=white)
![Helm](https://img.shields.io/badge/Helm-0F1689?style=flat-square&logo=helm&logoColor=white)

**CI/CD & GitOps**

![GitLab CI](https://img.shields.io/badge/GitLab%20CI-FC6D26?style=flat-square&logo=gitlab&logoColor=white)
![Argo CD](https://img.shields.io/badge/Argo%20CD-EF7B4D?style=flat-square&logo=argo&logoColor=white)
![GitHub Actions](https://img.shields.io/badge/GitHub%20Actions-2088FF?style=flat-square&logo=githubactions&logoColor=white)

**모니터링 & 관측 가능성**

![Prometheus](https://img.shields.io/badge/Prometheus-E6522C?style=flat-square&logo=prometheus&logoColor=white)
![Grafana](https://img.shields.io/badge/Grafana-F46800?style=flat-square&logo=grafana&logoColor=white)

**언어 & 데이터**

![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![SQL](https://img.shields.io/badge/SQL-4479A1?style=flat-square&logo=mysql&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)

---

## 📜 자격증

![AWS SAA](https://img.shields.io/badge/AWS%20Certified-Solutions%20Architect%20Associate%20(SAA--C03)-FF9900?style=flat-square&logo=amazonaws&logoColor=white)
![AWS CLF](https://img.shields.io/badge/AWS%20Certified-Cloud%20Practitioner%20(CLF--C02)-FF9900?style=flat-square&logo=amazonaws&logoColor=white)
![Terraform Associate](https://img.shields.io/badge/HashiCorp%20Certified-Terraform%20Associate-844FBA?style=flat-square&logo=terraform&logoColor=white)
![KCNA](https://img.shields.io/badge/CNCF-KCNA-326CE5?style=flat-square&logo=kubernetes&logoColor=white)
![Linux Master](https://img.shields.io/badge/리눅스마스터-2급-FCC624?style=flat-square&logo=linux&logoColor=black)
![SAP ABAP](https://img.shields.io/badge/SAP%20Certified-Back--End%20Developer%20ABAP%20Cloud-0FAAFF?style=flat-square&logo=sap&logoColor=white)
![SQLD](https://img.shields.io/badge/SQLD-SQL개발자-003545?style=flat-square&logo=amazondynamodb&logoColor=white)
![TOPCIT](https://img.shields.io/badge/TOPCIT-Level%203-5C6BC0?style=flat-square)

---

## 🎓 교육 · 부트캠프

- **CJ CloudWave 부트캠프** (2025.12 ~ 2026.02) — 클라우드 인프라 · DevOps 실무 과정
- **교내 SAP Co-op Track 부트캠프** (2025.09 ~ 2025.12) — SAP MM 모듈 · ABAP Cloud

---

## 🚀 대표 프로젝트

### ☁️ CloudWave — AI 기반 네트워크 이상 탐지 & 멀티리전 DR
> VPC Flow Logs를 실시간으로 수집·분석해 이상 트래픽을 탐지하고 Slack으로 알림하는 서버리스 파이프라인 구축 *(CJ CloudWave 부트캠프)*

- **파이프라인:** `VPC Flow Logs → Kinesis → S3 → EventBridge → Step Functions → SageMaker → Lambda → Slack`
- **고가용성:** Olive Young 세일 러시를 가정한 150,000 VU 부하 처리 아키텍처 설계 (HPA + Karpenter 오토스케일링)
- **재해 복구(DR):** 서울–도쿄 멀티리전 **Warm Standby** 구성 (Route53 기반 페일오버)
- **모니터링:** Datadog · CloudWatch 연동 통합 대시보드 구축
- `AWS` `Terraform` `EKS` `Kinesis` `SageMaker` `Step Functions` `Lambda` `XGBoost`

### 🛰️ CORE — 위성 영상 기반 재난 탐지 플랫폼 (인프라)
> GPU 워크로드를 다루는 재난 탐지 플랫폼의 **인프라 전 영역**을 단독 설계/구축

- **GitOps:** `Terraform` + `GitLab CI → ECR → ArgoCD → EKS` 자동 배포 파이프라인
- **비용 최적화:** `Karpenter` 기반 **GPU 노드 Scale-to-Zero** (g4dn.xlarge / NVIDIA T4)
- **관측 가능성:** `DCGM + Prometheus + Grafana`로 GPU 사용률/워크로드 모니터링
- **보안:** `IRSA`로 최소 권한 원칙 적용

---

## 🤝 대외활동

- **KT IT 서포터즈 (KIT) 3기** — IT 교육 봉사 · 충청남도 교육감 표창
- **LG CNS AI Genius 11기**
- **LG SDC 서포터즈**


---

## 📫 연락처

<div align="center">

[![Email](https://img.shields.io/badge/Email-eraaster@naver.com-EA4335?style=flat-square&logo=gmail&logoColor=white)](mailto:eraaster@naver.com)

</div>
