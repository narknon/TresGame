#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_n_bx202.generated.h"

class ATresAccompanyPawnBase;
class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresNpcPawn_n_bx202 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRBaymaxRideBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_NpcEffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AppendCure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIntervalTime;
    
public:
    ATresNpcPawn_n_bx202(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightArmAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffset() const;
    
};

