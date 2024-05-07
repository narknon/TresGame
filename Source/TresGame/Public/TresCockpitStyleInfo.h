#pragma once
#include "CoreMinimal.h"
#include "ETresUIPadButtonType.h"
#include "TresCockpitStyleInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCockpitStyleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_strBtnLocKeyAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresUIPadButtonType>> m_eBtnTypeAry;
    
    TRESGAME_API FTresCockpitStyleInfo();
};

