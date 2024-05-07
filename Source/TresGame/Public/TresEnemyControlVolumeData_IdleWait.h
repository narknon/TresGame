#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresEnemyControlVolumeData_IdleWait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnemyControlVolumeData_IdleWait : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsDistance2D: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartMoveDistance;
    
    UTresEnemyControlVolumeData_IdleWait();
};

