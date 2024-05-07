#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresStateID.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemySetAppearMode.h"
#include "TresEnemyPawn_e_ex107.generated.h"

class UParticleSystem;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex107 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCharPawnBase> m_DropPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WeaponAppearParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeaponVisibleInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FallAnimBlendTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParameterScale;
    
    ATresEnemyPawn_e_ex107(const FObjectInitializer& ObjectInitializer);
    UFUNCTION()
    void OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAppear(TEnumAsByte<ETresEnemySetAppearMode> AppearMode, float AppearTime);
    
};

