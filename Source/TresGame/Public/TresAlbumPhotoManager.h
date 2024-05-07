#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresPhotoLoadWork.h"
#include "TresAlbumPhotoManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UTresAlbumPhotoManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PhotoIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresPhotoLoadWork> m_PhotoLoadWorkPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pTargetTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_ReleaseTextureBuffer;
    
public:
    UTresAlbumPhotoManager();
};

