#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeGimmickStaticBase.h"
#include "TresGimmickPrizeGimmickStaticBaseDLC.generated.h"

class AActor;
class UTresBodyCollPrimitive;
class UTresLockonTargetComponent;
class UTresGimmickHitCountComponent;
class UTresPrizeGenComponent;
class UTresNavModifierComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickPrizeGimmickStaticBaseDLC : public ATresGimmickPrizeGimmickStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* TresLockonTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* TresBodyCollPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresPrizeGenComponent* TresPrizeGen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGimmickHitCountComponent* TresGimmickHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresNavModifierComponent* TresNavModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DropPrize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PrizeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_DestroyGimmickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDestroyDisableBodyCollition;
    
    ATresGimmickPrizeGimmickStaticBaseDLC(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnTresDestroyedGimmickCallback(AActor* DamageCauser);
    
};

