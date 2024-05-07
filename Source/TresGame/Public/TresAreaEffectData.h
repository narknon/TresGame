#pragma once
#include "CoreMinimal.h"
#include "TresDecoPartsComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresAreaCustonEffectsType -FallbackName=ETresAreaCustonEffectsType
#include "TresAreaEffectData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresAreaEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bNoUseDefaultAttachEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresAreaCustonEffectsType> EffectsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> SpawnParticleSystems;
    
    TRESGAME_API FTresAreaEffectData();
};

