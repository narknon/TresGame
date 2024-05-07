#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBxSingouki.h"
#include "TresGimmickBxSingouki01.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable)
class ATresGimmickBxSingouki01 : public ATresGimmickBxSingouki {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NoLightsFlagName;
    
    ATresGimmickBxSingouki01(const FObjectInitializer& ObjectInitializer);
};

