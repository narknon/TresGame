#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBonamikCharaWindKey.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "TresInterpTrackBonamikCharaWind.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikCharaWind : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackBonamikCharaWindKey> m_Keys;
    
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
    
    UTresInterpTrackBonamikCharaWind();
};

