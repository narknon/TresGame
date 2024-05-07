#pragma once
#include "CoreMinimal.h"
#include "EBX901_QuickMoveDir.h"
#include "TresActionDefinitionBase.h"
#include "BX901_DarkCubeMineGroupSpawnInfo.h"
#include "TresAction4_e_bx901_QuickMove.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction4_e_bx901_QuickMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EBX901_QuickMoveDir> m_Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngleFromFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInitVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBrakeAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_DarkCubeMineGroupSpawnInfo m_DarkCubeMineGroupSpawnInfo;
    
    UTresAction4_e_bx901_QuickMove();
};

