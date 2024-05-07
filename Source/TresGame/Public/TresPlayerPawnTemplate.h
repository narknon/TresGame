#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "ETresStateID.h"
#include "VoiceAndLipParameter.h"
#include "TresPlayerPawnTemplate.generated.h"

class UTresPlayerAttackStateDataSet;

UCLASS(Abstract, Blueprintable)
class ATresPlayerPawnTemplate : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPlayerAttackStateDataSet* m_pAttackStateDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoiceAndLipParameter> m_VoiceAndLipParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StrongAddMotionNameForFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StrongAddMotionNameForBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StrongAddMotionSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAddReactionCoolDownTime;
    
public:
    ATresPlayerPawnTemplate(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION()
    void _OnDtorStateForBind(TEnumAsByte<ETresStateID> eStateID);
    
    UFUNCTION()
    void _OnCtorStateForBind(TEnumAsByte<ETresStateID> eStateID);
    
};

