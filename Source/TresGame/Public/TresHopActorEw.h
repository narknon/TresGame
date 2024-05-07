#pragma once
#include "CoreMinimal.h"
#include "TresHopActor.h"
#include "UObject/NoExportTypes.h"
#include "TresHopActorEw.generated.h"

UCLASS(Blueprintable)
class ATresHopActorEw : public ATresHopActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MyInverseUpVectorDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PermissionAngle;
    
    ATresHopActorEw(const FObjectInitializer& ObjectInitializer);
};

