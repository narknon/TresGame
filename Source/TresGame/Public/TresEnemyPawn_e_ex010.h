#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETresLevelEntityAppearMode.h"
#include "TresEnemyPawn_e_ca010_CoopInfo.h"
#include "TresEnemyPawn_e_ex010.generated.h"

class ATresEnemyPawn_e_ex007;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex010 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyPawn_e_ca010_CoopInfo m_CoopInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bRailSlidePawn: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex007* m_PartnerPawn;
    
    ATresEnemyPawn_e_ex010(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetAppearModeAndState(TEnumAsByte<ETresLevelEntityAppearMode> AppearMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckUpDownCollision(float inRelativeHeight);
    
};

