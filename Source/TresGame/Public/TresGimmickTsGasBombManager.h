#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickTsGasBombManager.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickTsGasBombManager : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VoiceEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VoiceEffectFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EffectRange;
    
    ATresGimmickTsGasBombManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartVoiceEffect(FVector BaseLocation, float EffectRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyChangeVoiceEffect(bool bEffected);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnEffected(ATresCharPawnBase* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    void EndVoiceEffectImmediately();
    
};

