#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "ETresEnemyWildDanceWarpHeight_e_ex358.h"
#include "WildDanceThunderStepActionParam_e_ex358.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWildDanceThunderStepActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBaseLocationOverrideMapCenterLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableNextAttackAppearDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyWildDanceWarpHeight_e_ex358::Type> AppearHeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableLocationVelocityOffset: 1;
    
    UWildDanceThunderStepActionParam_e_ex358();
};

