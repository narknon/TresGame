#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SQEXSEADWhizSeComponent.generated.h"

class USoundBase;
class UAudioComponent;
class UMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADWhizSeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ApproachJudgmentDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ApproachJudgmentVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bOnlyOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bUseRelativeVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bCalcVelocityFromLocation: 1;
    
private:
    UPROPERTY(Export, Transient)
    UAudioComponent* MyAudioComponent;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* MyMeshComponent;
    
public:
    USQEXSEADWhizSeComponent();
};

