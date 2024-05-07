#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex061.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex061 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearFadeTime;
    
    ATresEnemyPawn_e_ex061(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTsuboWaiting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableAttractionFlowMarkerDisp_061() const;
    
};

