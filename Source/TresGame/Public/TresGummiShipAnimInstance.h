#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "TresGummiShipAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresGummiShipAnimInstance : public UAnimSingleNodeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MontagePreviewStartSectionIdx;
    
    UTresGummiShipAnimInstance();
};

