#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEnemyLargeShipBase.h"
#include "ETresEnemyUniqueID.h"
#include "TresAction_EnemyLargeShipBase_HeartlessShipSummon.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyLargeShipBase_HeartlessShipSummon : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyUniqueID m_EnemyID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnemyLargeShipBase::Type> m_RotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RandomYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRequireCoreFacedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpeedZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpawnHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetCoreTypeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CoreItemTypeSpawnWeight01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CoreItemTypeSpawnWeight02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CoreItemTypeSpawnWeight03;
    
    UTresAction_EnemyLargeShipBase_HeartlessShipSummon();
};

