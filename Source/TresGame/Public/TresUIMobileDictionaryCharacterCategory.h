#pragma once
#include "CoreMinimal.h"
#include "ETresWorldCode.h"
#include "ETresUIDataVersion.h"
#include "TresUIMobileDictionaryCharacterCategory.generated.h"

USTRUCT(BlueprintType)
struct FTresUIMobileDictionaryCharacterCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresUIMobileDictionaryCharacterCategory();
};

