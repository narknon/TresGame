#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEXMatineeActorAsset -FallbackName=SQEXMatineeActorAsset
#include "SQEXMatineeActorAsset.h"
#include "TresTextureStream.h"
#include "TresOverwriteAllowedMips.h"
#include "TresTexturePump.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class TRESGAME_API UTresTexturePump : public USQEXMatineeActorAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InitialLoadNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InAdvance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresTextureStream> m_TextureStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresOverwriteAllowedMips> m_OverwriteMaxAllowedMips;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* m_PlayerController;
    
public:
    UTresTexturePump();
};

