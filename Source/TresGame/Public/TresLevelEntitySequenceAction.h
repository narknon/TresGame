#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntitySequenceAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetGroup;
    
    UTresLevelEntitySequenceAction();
};

