#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickBalanceBall.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickBxDaruma.generated.h"

class ATresCameraNormal;
class AActor;

UCLASS(Blueprintable)
class ATresGimmickBxDaruma : public ATresGimmickBalanceBall, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_TakeOverCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> BalanceBallCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> BreakClasses;
    
    ATresGimmickBxDaruma(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBreakClass(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void AvoidDaruma();
    
    
    // Fix for true pure virtual functions not being implemented
};

