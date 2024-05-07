#pragma once
#include "CoreMinimal.h"
#include "StoleTrapWorkData.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FStoleTrapWorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_PointEffectComp;
    
    TRESGAME_API FStoleTrapWorkData();
};

