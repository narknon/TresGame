#pragma once
#include "CoreMinimal.h"
#include "TresUIPreloadInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FTresUIPreloadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    uint32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> PreloadQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedObjectsHolder;
    
    TRESGAME_API FTresUIPreloadInfo();
};

