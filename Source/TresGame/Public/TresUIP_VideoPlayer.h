#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_VideoPlayer.generated.h"

class UTextureRenderTarget2D;
class UGFxObject;
class UManaTexture;
class UTresVideoTexture;

UCLASS(Blueprintable)
class UTresUIP_VideoPlayer : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_FullScreenRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaTexture* m_Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresVideoTexture* m_VideoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ObjVideo;
    
public:
    UTresUIP_VideoPlayer();
};

