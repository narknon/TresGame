#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "ETresEnemyXIIILEPlayVoiceKind.h"
#include "ETresStateID.h"
#include "TresEnemyXIIILEPawnBase.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class ATresEnemyXIIILEPawnBase : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyXIIILEPlayVoiceKind m_RevengePlayVoiceKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengetVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VisibleTime;
    
public:
    ATresEnemyXIIILEPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION()
    void OnDtorStateCallBackXIIIE(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateCallBackXIIIE(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable)
    bool IsDuringWarp();
    
};

