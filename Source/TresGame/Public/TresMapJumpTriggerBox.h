#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresMapJumpTriggerBoxSignatureDelegate.h"
#include "ETresMapJumpFadeKind.h"
#include "TresMapJumpTriggerBox.generated.h"

UCLASS(Blueprintable)
class ATresMapJumpTriggerBox : public ATresTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresMapJumpFadeKind> m_FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BlueprintMapJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresMapJumpTriggerBoxSignature OnMapJump;
    
    ATresMapJumpTriggerBox(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void InvokeMapJump();
    
};

