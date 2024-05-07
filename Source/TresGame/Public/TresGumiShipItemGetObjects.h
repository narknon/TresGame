#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipItemGetObjects.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipItemGetObjects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pMaxIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pItemNum;
    
    TRESGAME_API FTresGumiShipItemGetObjects();
};

