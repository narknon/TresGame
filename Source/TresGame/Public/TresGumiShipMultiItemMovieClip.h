#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipMultiItemMovieClip.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipMultiItemMovieClip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pItemNum;
    
    TRESGAME_API FTresGumiShipMultiItemMovieClip();
};

