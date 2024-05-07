#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresPhysObjDestroyVolume.generated.h"

UCLASS(Blueprintable)
class ATresPhysObjDestroyVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisappearFilterTag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_DisappearActorTags;
    
    ATresPhysObjDestroyVolume(const FObjectInitializer& ObjectInitializer);
};

