#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "ETresGumiShipGimmickID.h"
#include "TresGumiShipLevelEntityInterface.h"
#include "TresGumiShipGimmickActorBase.generated.h"

class UTresEffectAttachComponent;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipGimmickActorBase : public ATresGumiShipActorBase, public ITresGumiShipLevelEntityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* m_pEffectAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipGimmickID m_eGimmickID;
    
public:
    ATresGumiShipGimmickActorBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void FadeOutEffect(float InFadeOutTime, int32 InGroupID);
    
    UFUNCTION(BlueprintCallable)
    void EndEffect(int32 InGroupID);
    
    UFUNCTION(BlueprintCallable)
    void DestroyEffects(int32 InGroupID);
    
    
    // Fix for true pure virtual functions not being implemented
};

