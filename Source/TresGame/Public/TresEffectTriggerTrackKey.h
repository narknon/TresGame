#pragma once
#include "CoreMinimal.h"
#include "ETresEffectTriggerTrack_TriggerType.h"
#include "UObject/NoExportTypes.h"
#include "TresEffectTriggerTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresEffectTriggerTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEffectTriggerTrack_TriggerType> m_TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChangeColor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ParticleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleAlpha;
    
    TRESGAME_API FTresEffectTriggerTrackKey();
};

