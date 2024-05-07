#pragma once
#include "CoreMinimal.h"
#include "TresMapJumpDirectionalTriggerBox.h"
#include "TresLocText.h"
#include "TresMapJumpDirectionalTriggerBoxSelectUI.generated.h"

UCLASS(Blueprintable)
class ATresMapJumpDirectionalTriggerBoxSelectUI : public ATresMapJumpDirectionalTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresLocText ChoiceTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresLocText> Choices;
    
    ATresMapJumpDirectionalTriggerBoxSelectUI(const FObjectInitializer& ObjectInitializer);
};

