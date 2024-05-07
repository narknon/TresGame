#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresIslandVolume.generated.h"

class UTexture2D;
class UTresMapSet;

UCLASS(Blueprintable)
class ATresIslandVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMapSet* MapSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeginOverlapMapsetCommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndOverlapMapsetCommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BeginOverlapLevelPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EndOverlapLevelPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> BeginResidentTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> EndResidentTextureList;
    
public:
    ATresIslandVolume(const FObjectInitializer& ObjectInitializer);
};

