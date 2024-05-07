#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "WolfSpawnInfo_e_ex731.h"
#include "TresAction2_e_ex731_MirageWolf.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex731_MirageWolf : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWolfSpawnInfo_e_ex731> m_WolfSpawnInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWolfLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInitJumpVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFlyAccelXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJumpAngle;
    
    UTresAction2_e_ex731_MirageWolf();
};

