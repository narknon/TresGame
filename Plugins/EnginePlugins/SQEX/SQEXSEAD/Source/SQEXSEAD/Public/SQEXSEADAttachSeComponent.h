#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADAttachSeComponent.generated.h"

class USoundBase;
class UAudioComponent;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADAttachSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bFollowOwnerVisible: 1;
    
private:
    UPROPERTY(Export, Transient)
    UAudioComponent* MyAudioComponent;
    
    UPROPERTY(Export, Transient)
    USceneComponent* MyAttachComponent;
    
public:
    USQEXSEADAttachSeComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
};

