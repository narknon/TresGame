#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickBattleWall.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickBattleWall : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableChangeCinematicEvent;
    
    ATresGimmickBattleWall(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeCinematicModeProc(bool bIsCinematicMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnChangeCinematicMode(bool bIsCinematicMode);
    
};

