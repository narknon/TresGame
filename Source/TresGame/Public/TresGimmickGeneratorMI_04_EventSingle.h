#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorMI_04_EventBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04_EventSingle.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorMI_04_EventSingle : public ATresGimmickGeneratorMI_04_EventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetDoor;
    
public:
    ATresGimmickGeneratorMI_04_EventSingle(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform BPIE_GetTargetTransform();
    
};

