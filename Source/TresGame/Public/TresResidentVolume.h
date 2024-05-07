#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresResidentVolume.generated.h"

class UObject;

UCLASS(Blueprintable)
class ATresResidentVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_AssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_AssetObjects;
    
public:
    ATresResidentVolume(const FObjectInitializer& ObjectInitializer);
};

