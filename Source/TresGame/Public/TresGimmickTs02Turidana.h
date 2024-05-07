#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickTs02Turidana.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickTs02Turidana : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickTs02Turidana(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GimmickNotifyActorStartSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
};

