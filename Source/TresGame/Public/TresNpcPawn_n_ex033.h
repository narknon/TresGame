#pragma once
#include "CoreMinimal.h"
#include "TresNpcPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresNpcPawn_n_ex033.generated.h"

class AController;
class AActor;

UCLASS(Blueprintable)
class ATresNpcPawn_n_ex033 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_FriendPointAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_FriendPointMul;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AppendCure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackTime;
    
public:
    ATresNpcPawn_n_ex033(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageForRoxas(float InDamageAmount, const FDamageEvent& InDamageEvent, AController* InEventInstigator, AActor* InDamageCauser);
    
};

