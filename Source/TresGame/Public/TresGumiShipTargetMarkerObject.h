#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipTargetMarkerObject.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipTargetMarkerObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pLockAnm;
    
    TRESGAME_API FTresGumiShipTargetMarkerObject();
};

