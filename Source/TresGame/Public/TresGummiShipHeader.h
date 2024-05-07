#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresGummiShipHeader.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipHeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefGumiShipBP m_ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint16 m_nTotalBaseGummiNum;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint16 m_nTotalDecoGummiNum;
    
    TRESGAME_API FTresGummiShipHeader();
};

