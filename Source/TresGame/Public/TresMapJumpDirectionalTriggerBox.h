#pragma once
#include "CoreMinimal.h"
#include "TresDirectionalTriggerBoxTickBase.h"
#include "ETresMapJumpFadeKind.h"
#include "TresMapJumpDirectionalTriggerBoxSignatureDelegate.h"
#include "TresMapJumpDirectionalTriggerBox.generated.h"

class UTresMapMarkerComponent;

UCLASS(Blueprintable)
class ATresMapJumpDirectionalTriggerBox : public ATresDirectionalTriggerBoxTickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresMapJumpFadeKind> m_FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BlueprintMapJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresMapJumpDirectionalTriggerBoxSignature OnMapJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverrideMarkerSize;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresMapMarkerComponent* MapMarkerComponent;
    
    ATresMapJumpDirectionalTriggerBox(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetActiveMapMarker(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMapJump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MapJump();
    
};

