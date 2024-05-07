#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureDefines.h"
#include "TresOverwriteAllowedMips.generated.h"

USTRUCT(BlueprintType)
struct FTresOverwriteAllowedMips {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<TextureGroup> m_TextureGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxAllowedMips;
    
    TRESGAME_API FTresOverwriteAllowedMips();
};

