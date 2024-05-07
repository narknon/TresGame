#pragma once
#include "CoreMinimal.h"
#include "EDancePerformType.h"
#include "UObject/NoExportTypes.h"
#include "TresRapunzelDanceMarker.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresRapunzelDanceMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDancePerformType m_PerformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pPSC;
    
    TRESGAME_API FTresRapunzelDanceMarker();
};

