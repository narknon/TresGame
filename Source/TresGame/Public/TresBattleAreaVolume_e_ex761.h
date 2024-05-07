#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemy_e_ex761_BattleAreaAppearTiming.h"
#include "ETresEnemy_e_ex761_BattleAreaAppear.h"
#include "TresVolume.h"
#include "TresBattleAreaCameraData_e_ex761.h"
#include "TresBattleAreaVolume_e_ex761.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresBattleAreaVolume_e_ex761 : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRotationCenterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemy_e_ex761_BattleAreaAppear::Type> m_BattleAreaAppearType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemy_e_ex761_BattleAreaAppearTiming::Type> m_BattleAreaAppearTimingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableCameraEvent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBattleAreaCameraData_e_ex761 m_BattleAreaCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnablePenetrationVec: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_PenetrationRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PenetrationRangeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableResetPenetration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableAttachHeight: 1;
    
public:
    ATresBattleAreaVolume_e_ex761(const FObjectInitializer& ObjectInitializer);
};

