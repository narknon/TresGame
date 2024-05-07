#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresDropItemID.h"
#include "TresGimmickCA_SimpleChar.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickCA_SimpleChar : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDropItemID m_prizeKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_prizeSpawnUpDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DisableSpawnPrizeAuto;
    
public:
    ATresGimmickCA_SimpleChar(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void RequestSpawnPrize();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void RequestDead();
    
};

