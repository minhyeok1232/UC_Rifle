# UC_Rifle
Unreal 4.26 기반의 3D Shooting 게임입니다.

## 📌 목차
1. [🔎 프로젝트 소개](#-프로젝트-소개)
2. [🕒 프로젝트 기간](#-프로젝트-기간)
3. [🔗 클래스 다이어그램](#-클래스-다이어그램)
4. [🔄 진행 및 개선 사항](#-진행-및-개선-사항)
5. [⚡ 프로젝트 최적화 과정](#-프로젝트-최적화-과정)
6. [📝 개발 관점에서의 느낀 점](#-개발-관점에서의-느낀-점)

---

## 🔎 프로젝트 소개
- **장르** : 3D Battle Game
- **Engine** : Unreal Engine 4.26
- **IDE** : JetBrains Rider
- **목적** :
  - 무기 및 전투 시스템의 확장성을 고려한 클래스 구조 설계
  - ABP(애니메이션 블루프린트)와, Animation Notify를 통해 전투 이펙트 및 상태 전환을 학습
  - BP(블루프린트)에 컴퍼넌트를 추가하여 모듈화된 구조를 설계

<details>
  <summary>🎇 프로젝트 실행 방법</summary>

### 1️⃣ Git Clone
  ```bash
  git clone https://github.com/minhyeok1232/UC_Rifle.git
```
### 2️⃣ 파일 경로
아래 경로로 이동합니다.
#### UC_Rifle

### 3️⃣ 실행 파일
UC_Rifle.uproject 우 클릭 후,
✅ 'Generate Visual Studio project files' 클릭

### ❗ 만약 'Generate Visual Studio project files' 옵션이 보이지 않는다면?
[클릭하기](https://velog.io/@hani345/Unreal%EA%B3%BC-C%EC%97%B0%EB%8F%99%ED%95%98%EA%B8%B0)

### 4️⃣ IDE
현재 사용하는 IDE 환경에서 소스코드가 표시됩니다.<br>
솔루션 빌드 (Ctrl + B) 완료 후,<br>
✅ UC_Rifle.uproject 클릭하여 실행

</details>


## 🎯 프로젝트 기간
- MVP 개발 기간 : 2024.10 ~ 2024.11
- 프로젝트 인원 : 1인 (개인)

## 🔗 클래스 다이어그램
### 객체지향 설계를 반영한 클래스 구조도
#### C++로 작성한 클래스 다이어그램
![image](https://github.com/user-attachments/assets/7744f5d0-c374-45ae-877d-db0e367e0da0)


<details>
  <summary> 주요 클래스 설명 </summary>

#### Character Script
- CPlayer : 플레이어 캐릭터의 입력 등의 기능을 담당하는 클래스
- CAnimInstance : 애니메이션 블루프린트와 연동하여, 캐릭터의 3인칭 애니메이션을 처리하는 클래스
- CAnimInstance_Arms : 애니메이션 블루프린트와 연동하여, 캐릭터의 1인칭 애니메이션을 처리하는 클래스
- CWeaponComponent : 무기 상태(장착, 변경 등) 및 공격 실행을 제어하는 클래스

#### Weapon Script
- CWeapon : 무기 동작을 처리하는 클래스
- CWeaponComponent : 무기 상태(장착, 변경 등) 및 공격 실행을 제어하는 클래스
- CWeapon_AR4, CWeapon_AK47, CWeapon_Pistol : CWeapon을 상속받아 각각의 무기에 대한 고유한 기능을 구현하는 클래스
- CBullet : 총알의 동작을 제어하는 클래스
- CMagazine : 탄창 관련 로직을 담당하는 클래스

#### Utilities Script 
- CLog : UE_LOG 매크로를 활용하여 로그 출력 기능을 제공하는 클래스
- CHelpers : 객체를 찾거나 특정 기능을 쉽게 수행할 수 있게 코드 재사용성을 높이는 역할을 하는 클래스

#### Widget Script
- CUserWidget_CrossHair : 크로스헤어 UI를 관리하는 위젯 클래스
- CUserWidget_HUD : 게임 HUD를 표시하는 위젯 클래스 (UMG 활용)

#### Notify Script
- CAnimNotify_Reload : 무기 재장전을 위한 애니메이션 노티파이 클래스
- CAnimNotifyState_Equip : 무기 장착 애니메이션 상태를 관리하는 클래스




</details>

## 🔄 진행 및 개선 사항

### 애니메이션 시스템
#### 애니메이션 시스템 및 무기별 애니메이션 로직 분리

<details>
  <summary>🎇 자세히 보기 </summary>
  
![image](https://github.com/user-attachments/assets/f7f296ff-1ac3-42be-beb8-3145baca1aac)
- 각 무기마다 스테이트 머신을 통해 분리를 하였습니다.
![image](https://github.com/user-attachments/assets/8ec5daed-2989-4577-9562-46008f96163e)
- BS(Blend Space)를 활용하여 Speed값에 따라 걷기, 뛰기, 달리기의 애니메이션을 자연스럽게 전환하였습니다.
![image](https://github.com/user-attachments/assets/3d6971d2-f4aa-49ed-a732-8cb051c6beb4)
- 'UCAnimInstance(UAnimInstance 상속)'에서 애니메이션 상태 머신을 관리하였습니다.
![image](https://github.com/user-attachments/assets/72fbc994-2f7c-4422-bcb8-4991481a8170)
- Bow(활) 상태는 일반 무기와 달리 기본/조준 포즈의 동작이 다르기 때문에, 새로운 Layer를 만들어서 분리하였습니다.
![image](https://github.com/user-attachments/assets/db1259a0-3e19-48ff-8c54-f12d365f7944)
- 'UCAnimInstance'에서 현재 장착 중인 무기 상태를 받아서, EWeapon Type(Enum)형식에 따라 애니메이션이 나오게 적용하였습니다.

</details>

#### Aim Offset을 활용한 상체 애니메이션 보정

<details>
  <summary>🎇 자세히 보기 </summary>

- Bow(활)의 기본/조준 포즈의 동작을 bool로 포즈 블렌딩'을 통해 나누었습니다.
![image](https://github.com/user-attachments/assets/3b67a0bf-f1a2-47a9-b517-421149b4438d)
- 조준 중일 때는 'spine_02' 부위를 기준으로 해서 상체와 하체의 동작을 분리시켰습니다.
![image](https://github.com/user-attachments/assets/3c6445df-67df-4b7d-9e16-1eb594eabc15)
#### 하체는 이동하지만, 상체는 조준 중
![Image](https://github.com/user-attachments/assets/aa6df790-316f-4a23-9de6-bb5a58554772)

![image](https://github.com/user-attachments/assets/e6ae68a0-4200-493d-b601-8f3141fe4689)
조준 중일 시 AO(Aim Offset)값을 적용(UCAnimInstance 에서 동작)하여, 'spine_01'부위를 기준으로, 위/아래를 볼 수 있도록 상체 회전되도록 적용하였습니다.

</details>

#### Animation Montage에 특정 시점에 Notify를 조정

<details>
  <summary>🎇 자세히 보기 </summary>

- Montage를 활용하여 애니메이션의 특정 타이밍을 조정하였습니다.
![image](https://github.com/user-attachments/assets/7bfad7e6-4812-43b6-91a6-e62bf2a667d2)
- Animation Notify를 통해 '특정 프레임'에서 동작을 실행할 수 있습니다. 
![image](https://github.com/user-attachments/assets/08bbc26c-610d-4808-9114-0b47045459cc)

</details>

### 🤖 무기 로직 시스템 개선

<details>
  <summary>🎇 자세히 보기 </summary>

  1️⃣ 무기 상태 관리 (CWeaponComponent)
![image](https://github.com/user-attachments/assets/9f78c50f-42ba-46c2-808e-bd845827435d)
- CWeaponComponent는 전반적인 무기의 상태를 관리하는 클래스입니다.
- Delegate와 Enum을 사용하여 현재 장착중인 무기를 추적합니다.
- Animation Notify를 사용하여 무기 장착, 공격, 해제 등의 상태 변화를 감지합니다.

  2️⃣ 무기 동작을 담당하는 CDoAction과 CSubAction
![image](https://github.com/user-attachments/assets/b20a3344-a463-43d2-aa6e-7dda9491a5e7)
  - CDoAction → 메인 동작(마우스 1번) 담당
  - CSubAction → 서브 동작(마우스 2번) 담당
  ➡ 각 무기별로 서로 다른 공격 방식을 깔끔하게 분리되도록 설계하였습니다.

  3️⃣ 무기의 동작의 구조
  - 메인 동작과 서브 동작을 상속받는 형태의 구조로 정리하였습니다.
![image](https://github.com/user-attachments/assets/48dc2ebf-1e50-4a87-9122-c3f4fc0d90ae)
- 각 무기별로 오버라이드하여 다른 동작을 실행하도록 구현하였습니다.
- 구조를 깔끔하게 정리하여 유지보수성을 높일 수 있게 설계하였습니다.

  </details>

### 카메라 시스템

 <details>
  <summary>🎇 자세히 보기 </summary>

#### Matinee Camera Shake, Camera Animation
#### 카메라의 이동 경로와 회전값을 미리 지정하여 부드러운 연출 가능
![image](https://github.com/user-attachments/assets/ec1e17c7-2260-4108-8bd0-2af45686f0ea)
- 특정 애니메이션 프레임에서 Animation Notify를 사용하였습니다. <br>
![image](https://github.com/user-attachments/assets/2435570c-cf83-4043-877d-2d075bc4e11c)
![image](https://github.com/user-attachments/assets/2b4568a8-41df-457a-9c5f-3fe22ebd549a) 
- 'CameraAnim이 실행되면서 Notify_Begin에서 Camera Animation이 시작됩니다.
![image](https://github.com/user-attachments/assets/32559555-07fa-4b47-9446-19425d082621)
- UCameraModifier를 상속받은 UCCameraModifier에서 Camera Animation 역할을 수행합니다.
- SetLocation() 및 SetRotation()을 통해 카메라의 이동 및 회전을 설정합니다.
![image](https://github.com/user-attachments/assets/f02ebc7b-4a87-467d-b2a6-7b50f59949d2)
- Camera Animation으로 생성된 CA_Fist에서 특정 구간에 키(Key)를 추가하여 좌표를 설정합니다.

#### Matinee Camera Shake
![image](https://github.com/user-attachments/assets/2b4568a8-41df-457a-9c5f-3fe22ebd549a) <br>
마찬가지로, 특정 애니메이션 프레임에서 Animation Notify를 사용하였습니다.

</details>



## ⚡ 프로젝트 최적화 과정
### ✨ C++ 와 블루프린트 연계 
- `BlueprintNativeEvent`, `BlueprintImplementableEvent`, `BlueprintCallable`을 활용하여 C++과 Blueprint 사이에서 연동하였습니다.
  - 연산이 많이 필요한 핵심 로직은 C++로 처리하여 성능 최적화
  - 시각적 연출 및 애니메이션 등은 Blueprint로 구현
 <details>
  <summary>🎇 언리얼 블루프린트 함수 유형 정리 </summary>
   
   #### BlueprintCallable :
   - C++ 로 작성, 블루프린트 그래프에서 호출 가능하지만 변경이나 덮어쓰기는 불가능합니다. (ex.수학 함수)

   #### BlueprintImplementableEvent :
   - 헤더 파일(.h) 에 추가되지만, 함수 본문은 C++ 가 아닌 블루프린트 그래프에서 작성됩니다.
   - 표준 동작이 없는 이벤트를 자유롭게 변경할 수 있도록 하는 경우에 사용합니다. (ex.각 보스마다 다른 보상을 줌)
     
   #### BlueprintNativeEvent :
   - BlueprintCallable 과 BlueprintImplementableEvent 의 조합형으로 C++ 로 작성되었지만, 블루프린트에서 보조 또는 대체 가능합니다.
   - BlueprintNativeEvent 를 사용할 때는 함수 마지막에 "_Implementation" 을 붙여야 합니다.
     ![image](https://github.com/user-attachments/assets/cd7720a0-b428-43c8-92e6-a17a47808a90)

   </details>

<br><br>

### 데이터 에셋을 활용

<details>
  <summary>🎇 자세히 보기 </summary>

#### CWeaponStructures.h
![image](https://github.com/user-attachments/assets/759f1a4d-3a63-4971-848f-f031a4f6f682)<br>
각 무기마다 데이터 구조체를 사용하여 저장합니다.
- 하드코딩 없이 구조체를 통해 무기 데이터를 효율적으로 관리
- 이 구조체를 기반으로 여러 개의 무기 데이터를 설정 가능

#### UCWeaponAsset.h
![image](https://github.com/user-attachments/assets/9826cdde-0542-40d3-a524-b7cc3d6aceed)<br>
UDataAsset을 활용한 무기 데이터를 저장합니다.
- UCWeaponAsset 클래스는 UDataAsset을 상속받아 무기 데이터를 하나의 데이터 에셋으로 저장
- FWeaponData 구조체를 포함하여 무기별 설정(공격력, 범위, 애니메이션 등)을 데이터로 관리
- 데이터 에셋을 활용하여 무기 밸런스 수정 시 코드 수정없이 데이터 에셋 조정으로 변경 가능

#### Data Asset(DA)
![image](https://github.com/user-attachments/assets/f3ef49ea-c5b3-4774-8858-357ec79cb2f6)<br>
각 무기별로 데이터 에셋을 생성합니다.
![image](https://github.com/user-attachments/assets/3de8ab04-22b9-4cdf-9647-26429bcf2331)
무기 상태를 관리하는 'CWeaponComponent'클래스에 무기별 데이터 에셋을 적용합니다.

</details>

### 인터페이스 활용

<details>
  <summary>🎇 자세히 보기 </summary>

![image](https://github.com/user-attachments/assets/19a4760b-7e05-4921-b792-00db1d911d52)
- Player와 Enemy는 ACharacter를 상속받았기 때문에, 공통된 기능을 인터페이스를 통해 구현하였습니다.
- 특정 클래스에 종속되지 않고, 기능을 확장할 수 있도록 인터페이스를 설계하였습니다.

</details>

<br><br>

#### 플레이 영상 : [https://www.youtube.com/watch?v=zs6bJYGYkTU&t=3s]([https://www.youtube.com/watch?v=XatDEKotysU](https://www.youtube.com/watch?v=zs6bJYGYkTU&t=3s))
![Image](https://github.com/user-attachments/assets/dc303b46-610b-4fa0-b60b-5fb53bd18b29)
