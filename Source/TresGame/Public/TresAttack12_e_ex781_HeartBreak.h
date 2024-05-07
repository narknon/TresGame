#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack12_e_ex781_HeartBreak.generated.h"

class ATresPlayerPawnBase;

UCLASS(Blueprintable)
class UTresAttack12_e_ex781_HeartBreak : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CatchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CatchCenterMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Test;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AIAbortMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerPawnBase* m_CatchPlayer;
    
public:
    UTresAttack12_e_ex781_HeartBreak();
};

