#pragma once
#include "CoreMinimal.h"
#include "TresEffectAttachParts.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FTresEffectAttachParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pSkeletalMeshComponent;
    
    TRESGAME_API FTresEffectAttachParts();
};

