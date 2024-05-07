#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuMotionObjectProperty.h"
#include "UObject/Object.h"
#include "TresDebugMenuTextResource.h"
#include "TresDebugMenuImageResource.h"
#include "TresDebugMenuElement.h"
#include "TresDebugMenuMovieClipResource.h"
#include "TresDebugMenuCustomPart.h"
#include "TresDebugMenuMotionObject.h"
#include "TresDebugMenuResource.generated.h"

UCLASS(Blueprintable)
class UTresDebugMenuResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_TextureNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumBaseTextureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuImageResource> m_ImageResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuTextResource> m_TextResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuMovieClipResource> m_MovieClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuElement> m_Elements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RootElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuCustomPart> m_CustomParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuMotionObjectProperty> m_MotionObjectProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuMotionObject> m_MotionObjects;
    
    UTresDebugMenuResource();
};

