#pragma once
#include "CoreMinimal.h"
#include "TresUINaviMapMarkerData.generated.h"

class UGFxObject;
class AActor;

USTRUCT(BlueprintType)
struct FTresUINaviMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* ASObject;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> OwnerActor;
    
    TRESGAME_API FTresUINaviMapMarkerData();
};

