#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex307_GoOutCard.generated.h"

class UAnimSequenceBase;
class USoundBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex307_GoOutCard : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_GoOutCardVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableGoOutCardVoice2D: 1;
    
public:
    UTresAction2_e_ex307_GoOutCard();
};

