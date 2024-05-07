#pragma once
#include "CoreMinimal.h"
#include "TresStreamingTextureData.h"
#include "TresTextureStream.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresTextureStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresStreamingTextureData> m_TextureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_Textures;
    
    TRESGAME_API FTresTextureStream();
};

