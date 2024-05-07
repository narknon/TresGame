#pragma once
#include "CoreMinimal.h"
#include "ETresChrUniqueID.h"
#include "TresNpcAILeadSubCharaSlot.generated.h"

USTRUCT(BlueprintType)
struct FTresNpcAILeadSubCharaSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID Slot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID Slot1;
    
    TRESGAME_API FTresNpcAILeadSubCharaSlot();
};

