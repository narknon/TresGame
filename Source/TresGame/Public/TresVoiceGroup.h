#pragma once
#include "CoreMinimal.h"
#include "TresVoiceGroupUnit.h"
#include "TresVoiceGroup.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresVoiceGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bPlayOnGroupNotFound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pDefaultVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresVoiceGroupUnit> m_Table;
    
    FTresVoiceGroup();
};

