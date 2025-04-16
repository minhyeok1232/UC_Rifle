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
#### Actor
![image](https://github.com/user-attachments/assets/a4b4e611-021c-491e-afde-4bbe136d3ae4)

#### Widget
![image](https://github.com/user-attachments/assets/b417d9d1-996e-4d42-9c95-df982e185ab5)

#### Notify
![image](https://github.com/user-attachments/assets/5df21d3a-2383-4544-8b88-cd188c84015e)

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
- CUserWidget_HUD : 게임 HUD를 표시하는 위젯 클래스

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
#### Ex) Rifle_Reload_Montage
![Image](https://github.com/user-attachments/assets/2bf8f2e5-661b-462b-bd4a-34ca6bfc55b0)
- Animation Notify를 통해 '특정 프레임'에서 동작을 실행할 수 있습니다. 
![image](https://github.com/user-attachments/assets/669f161f-8ab4-46df-9c29-88e28f2a7020)
- 각 Notify에 Enum 형식의 Action Type에 따라 현재 Weapon의 해당 메소드를 수행합니다. 

- Notify와 Notify State의 차이점
  - Notify는 '특정 한 프레임'에서만 '한 번' 실행이 됩니다.
  - Notify State는 구간 설정이 가능하기 때문에 시작과 끝에서 각각 이벤트 발생시켜야 합니다.

</details>

### 🤖 무기 로직 시스템 개선

<details>
  <summary>🎇 자세히 보기 </summary>

#### 1️⃣ 무기 상태 관리 (CWeaponComponent)
![image](https://github.com/user-attachments/assets/50920b49-a09e-438d-8763-1c9d70694475)
- CWeaponComponent는 전반적인 무기의 상태를 관리하는 클래스입니다.
- Delegate와 Enum을 사용하여 현재 장착중인 무기를 추적합니다.
#### BP_Player에 사용 될 무기 리스트를 저장
![image](https://github.com/user-attachments/assets/16f774aa-9051-4d07-9c76-5a7be44f5879)

#### 장착중인 무기 추적
![image](https://github.com/user-attachments/assets/6db820cc-53de-4ba9-b897-fcd54ba3ae83)

#### 2️⃣ 무기 동작을 담당하는 CWeapon
![image](https://github.com/user-attachments/assets/d088d8f6-ef3a-4065-b3ba-2f814b046237)
- WeaponComponent에서 추적된 무기에 실제 동작이 일어납니다.
![image](https://github.com/user-attachments/assets/781eab89-1643-43d2-a5d8-3620c5b1cb0c)
![image](https://github.com/user-attachments/assets/e7fff49a-01a1-42ff-a52b-7b4de0b2277f)
- 각 무기에 대한 실제 동작이 일어납니다.

#### 3️⃣ 무기 시스템 계층 구조
![image](https://github.com/user-attachments/assets/28680b96-2ff3-4ef2-8620-a4c247bd9fff)
- 각 무기마다 조준 방식(FOV, 카메라 거리 등)이 다르기 때문에, 구조체를 활용하여 일관된 방식으로 데이터를 관리하였습니다.
![image](https://github.com/user-attachments/assets/2e3c9762-833e-45b3-ba22-542d6778fdef)
- Weapon에 상속받는 각 무기들에 대한 정보를 저장하였습니다.
![image](https://github.com/user-attachments/assets/3c466318-5cc6-4af1-b370-eef031fc2e40)
- 또한, override 지정자를 활용하여 부모 클래스의 함수를 재정의(Override)함으로써, 각 무기의 개별적인 동작을 구현하였습니다.

  </details>

### 발사 시스템 개선

 <details>
  <summary>🎇 자세히 보기 </summary>

  ```cpp

void ACWeapon::OnFiring()
{
	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(Owner);
	FVector direction = camera->GetForwardVector();
	FTransform transform = camera->GetComponentToWorld();  // 월드상에서 SRT

	FVector  start = transform.GetLocation() + direction;  // Gap을 생성
	FVector  end;
	
	direction = UKismetMathLibrary::RandomUnitVectorInConeInDegrees(direction, RecoilAngle);
	end = transform.GetLocation() + direction * HitDistance;

	TArray<AActor*> ignores;
	ignores.Add(Owner);

	FHitResult hitResult;
	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, ETraceTypeQuery::TraceTypeQuery1, false, ignores, EDrawDebugTrace::None, hitResult, true);

	if (hitResult.bBlockingHit)
	{
		FRotator rotator = hitResult.ImpactNormal.Rotation(); // 표면의 Normat을 이용하여 rotation
		if (!!HitDecal)
		{
			UDecalComponent* decal;
			decal = UGameplayStatics::SpawnDecalAtLocation(GetWorld(), HitDecal, FVector(5),
				hitResult.Location, rotator, 4);
			decal->SetFadeScreenSize(0);  // Fade이면 : 거리계산을 꺼준자
		}
		if (!!HitParticle)
		{
			FRotator impcatRotation = UKismetMathLibrary::FindLookAtRotation(hitResult.Location,
				hitResult.TraceStart);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle, hitResult.Location, impcatRotation);

		}
    }

	// 탄피배출
	if (!!EjectParticle)
	{
		UGameplayStatics::SpawnEmitterAttached(EjectParticle, Mesh, "Eject", FVector::ZeroVector,
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
	}
	// 총구 Effect
	if (!!FlashParticle)
	{
		UGameplayStatics::SpawnEmitterAttached(FlashParticle, Mesh, "Muzzle", FVector::ZeroVector,
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
	}

	// Sound
	if (!!FireSound)
	{
		FVector muzzleLocation = Mesh->GetSocketLocation("Muzzle");
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), FireSound, muzzleLocation);
	}

	// CameraShake를 run하면 콘트롤러가 필요함
	if (!!CameraShakeClass)
	{
		APlayerController* controller = Owner->GetController<APlayerController>();
		if (!!controller)
			controller->PlayerCameraManager->StartCameraShake(CameraShakeClass);

	}

	// 반동주기 : -를 주는 이유: 
	Owner->AddControllerPitchInput(-RecoilRate * UKismetMathLibrary::RandomFloatInRange(0.8, 1.2));


	// cross_hair
	{
		if (CurrSpreadRadius <= 1.0f)
		{
			CurrSpreadRadius += SpreadSpeed * GetWorld()->GetDeltaSeconds();
			if (!!CrossHair)
				CrossHair->UpdateSpreadRange(CurrSpreadRadius, MaxSpreadAlignment);
		}
		LastAddSpreadTime = GetWorld()->GetRealTimeSeconds();
	}

	// Bullet
	if(!!BulletClass)
	{
		FVector bulletLocation = Mesh->GetSocketLocation("Muzzle_Bullet");
		FActorSpawnParameters params;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ACBullet* bullet = GetWorld()->SpawnActor<ACBullet>(BulletClass, bulletLocation, direction.Rotation(), params);
		if (!!bullet)
			bullet->Shoot(direction);
	}

	CurrMagazineCount--;
	if (CurrMagazineCount <= 0)
	{
		if (CanReload())
			Reload();
	}
}


```  
  

</details>





## ⚡ 프로젝트 최적화 과정
### ✨ 코드 재사용성 증가

 <details>
  <summary>🎇 자세히 보기 </summary>

  #### 직접 제작한 유틸리티 클래스를 활용하여 코드 재사용성을 높였습니다.
![image](https://github.com/user-attachments/assets/9177fdce-73a3-4452-a323-8590c164ab4e)
![image](https://github.com/user-attachments/assets/882aab86-e6a0-461b-9067-d4232dffa03f)
- Unreal에서 제공하는 유틸리티 함수를 활용하여 객체를 찾거나 특정 기능을 쉽게 수행할 수 있도록 설계하였습니다.

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
