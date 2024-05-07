#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex773_Eclipse13Base.h"
#include "TresProjectile_e_ex773_Eclipse13.generated.h"

class UTresBodyCollPrimitive;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_Eclipse13 : public ATresProjectile_e_ex773_Eclipse13Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyBuildNavTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleScaleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseShellSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapObjHitSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* TresBodyCollPrimitive;
    
public:
    ATresProjectile_e_ex773_Eclipse13(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BPE_ConvertScaleRate(float Rate);
    
};

