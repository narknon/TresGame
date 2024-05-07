#pragma once
#include "CoreMinimal.h"
#include "TresLSIGameDriver.generated.h"

class UTresGameInstance;
class APlayerController;
class AGameMode;
class APostProcessVolume;
class ATresLSIGameActor;
class ACameraActor;
class UPlayerInput;
class AActor;

USTRUCT(BlueprintType)
struct FTresLSIGameDriver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresGameInstance* m_GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameMode* m_LSIGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresLSIGameActor* m_LSIGameActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* m_LSIGameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerInput* m_LSIGamePlayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostProcessVolume* m_LSIPostprocess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* m_OriginalPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_OriginalViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_OriginalHiddenActors;
    
public:
    TRESGAME_API FTresLSIGameDriver();
};

