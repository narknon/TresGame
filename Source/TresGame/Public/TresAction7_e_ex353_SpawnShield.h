#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction7_e_ex353_SpawnShield.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction7_e_ex353_SpawnShield : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsOnlySpawnLocationList: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CanSpawnTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShieldSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShieldLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShieldEnableColTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShieldHitAfterLifeTime;
    
    UTresAction7_e_ex353_SpawnShield();
};

