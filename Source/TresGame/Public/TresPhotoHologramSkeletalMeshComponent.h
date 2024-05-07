#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalMeshComponent.h"
#include "TresPhotoHologramSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPhotoHologramSkeletalMeshComponent : public UTresSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonamikPreRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopBonamik;
    
    UTresPhotoHologramSkeletalMeshComponent();
};

