#pragma once
#include "CoreMinimal.h"
#include "TresGimmickCA_MovableFishBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_MovableFishFoodBase.generated.h"

UCLASS(Blueprintable)
class ATresGimmickCA_MovableFishFoodBase : public ATresGimmickCA_MovableFishBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_ReactorActiveRange;
    
public:
    ATresGimmickCA_MovableFishFoodBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnFishFoodReactorDeactivate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnFishFoodReactorActivate();
    
};

