#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "TresHologramCharaWindParam.generated.h"

USTRUCT(BlueprintType)
struct FTresHologramCharaWindParam {
    GENERATED_BODY()
public:
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
    
    TRESGAME_API FTresHologramCharaWindParam();
};

