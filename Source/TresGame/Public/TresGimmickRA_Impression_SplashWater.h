#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "ETresCommandKind.h"
#include "TresGimmickRA_Impression_SplashWater.generated.h"

class UTresReactorComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresGimmickRA_Impression_SplashWater : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_PCAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_pReactor;
    
public:
    ATresGimmickRA_Impression_SplashWater(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRapunzelWaterHit();
    
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecSplashWater();
    
};

