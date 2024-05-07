#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresComNpcActionDefinitionPlay.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresComNpcActionDefinitionPlay : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAnimLoop: 1;
    
public:
    UTresComNpcActionDefinitionPlay();
};

