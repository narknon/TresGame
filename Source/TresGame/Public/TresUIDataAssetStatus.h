#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetStatus.generated.h"

class UTresUIHudCommandDataAsset;
class ATresUIActor;
class USwfMovie;
class UObject;
class UTexture;

UCLASS(Blueprintable)
class UTresUIDataAssetStatus : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* FaceSwfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> FaceSwfRefAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableWearForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresUIActor> CampTopUIActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* MenuFaceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIHudCommandDataAsset* HudCommandDataAsset;
    
    UTresUIDataAssetStatus();
};

