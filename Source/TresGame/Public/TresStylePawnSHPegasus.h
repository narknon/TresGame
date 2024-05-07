#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresStylePawnBase.h"
#include "TresStylePawnSHPegasus.generated.h"

class ATresProjectileBase;
class ATresAccompanyPawnBase;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresStylePawnSHPegasus : public ATresStylePawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDispDebugLine: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjThunder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_SHChariotAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pNextActor;
    
public:
    ATresStylePawnSHPegasus(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaYaw() const;
    
};

