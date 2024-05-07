#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex773_Eclipse13Base.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex773_Eclipse13_Explosion.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_Eclipse13_Explosion : public ATresProjectile_e_ex773_Eclipse13Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedFrame;
    
    ATresProjectile_e_ex773_Eclipse13_Explosion(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeShootIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeScale(const FVector& Scale);
    
};

