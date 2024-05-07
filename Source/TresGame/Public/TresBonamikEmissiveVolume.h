#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "TresBonamikEmissiveVolume.generated.h"

class USkinnedMeshComponent;

UCLASS(Blueprintable)
class TRESGAME_API ATresBonamikEmissiveVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkinnedMeshComponent*> m_ReferencedComponets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> m_DirectionSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DirectionVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BaseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaveAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WavePeriod;
    
    ATresBonamikEmissiveVolume(const FObjectInitializer& ObjectInitializer);
};

