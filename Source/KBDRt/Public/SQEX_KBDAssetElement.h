#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "SQEX_KBDAssetElement.generated.h"

class UAssetUserData;

USTRUCT(BlueprintType)
struct KBDRT_API FSQEX_KBDAssetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName ElementName = "default";
    
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite)
    TArray<UAssetUserData*> AssetUserDatas;
    
    FSQEX_KBDAssetElement();
};

