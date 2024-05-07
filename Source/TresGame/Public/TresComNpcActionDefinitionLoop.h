#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresComNpcActionDefinitionLoop.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresComNpcActionDefinitionLoop : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LoopStartAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LoopAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LoopEndAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLoopTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLoopTime;
    
    UTresComNpcActionDefinitionLoop();
};

