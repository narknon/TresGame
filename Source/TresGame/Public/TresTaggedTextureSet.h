#pragma once
#include "CoreMinimal.h"
#include "TresTextureReference.h"
#include "TresTaggedTextureSet.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresTaggedTextureSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresTextureReference> m_TextureReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_Textures;
    
    TRESGAME_API FTresTaggedTextureSet();
};

