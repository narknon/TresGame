#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipDestroyMovieClip.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipDestroyMovieClip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pNumEff;
    
    TRESGAME_API FTresGumiShipDestroyMovieClip();
};

