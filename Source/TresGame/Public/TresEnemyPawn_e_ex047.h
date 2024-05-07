#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETrese_ex047WorldTypes.h"
#include "TresEnemyPawn_e_ex047.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex047 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETrese_ex047WorldTypes> m_WorldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MasicParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MasicParticleSocketName;
    
    ATresEnemyPawn_e_ex047(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShotHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRevengeCoolDownTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCallEnemyInvisible();
    
    UFUNCTION(BlueprintCallable)
    void BpDoPop();
    
};

