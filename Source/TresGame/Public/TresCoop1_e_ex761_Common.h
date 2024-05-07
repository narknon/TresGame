#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex761_Common.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoop1_e_ex761_Common : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsIgnoreTargetNonePawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsIgnoreAttackPawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsIgnoreDamageReactionPawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableDamageOnAbort: 1;
    
public:
    UTresCoop1_e_ex761_Common();
    UFUNCTION(BlueprintCallable)
    void OnLeaderAttackHit(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    bool IsLeaderAttackHit(const FTresCoopDefinitionParamBP& Param);
    
};

