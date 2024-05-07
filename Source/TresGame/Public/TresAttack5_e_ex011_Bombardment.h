#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex011_Base.h"
#include "TresMotion_e_ex011_Bombardment.h"
#include "TresAttack5_e_ex011_Bombardment.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex011_Bombardment : public UTresAttack_e_ex011_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresMotion_e_ex011_Bombardment m_AnimDataList[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ShotSocketNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotHeightOffset;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_ProjectileSpeedRate[3];
    
public:
    UTresAttack5_e_ex011_Bombardment();
};

