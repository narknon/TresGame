#pragma once
#include "CoreMinimal.h"
#include "TresDecalData.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct FTresDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UMaterial* m_DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    float m_DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    float m_LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    float m_FadeinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    float m_FadeoutTime;
    
    TRESGAME_API FTresDecalData();
};

