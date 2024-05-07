#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSharedActor.generated.h"

class ATresCameraFix;

UCLASS(Abstract, Blueprintable)
class ATresSharedActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_cameraWorkEventName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraFix* m_pFixedCamera;
    
public:
    ATresSharedActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    ATresCameraFix* UpdateFixedCamera(float FieldOfView, FVector WorldLocation, FRotator WorldRotation);
    
    UFUNCTION(BlueprintCallable)
    ATresCameraFix* SpawnFixedCamera(FName Name, bool bTakeover, float FieldOfView, FVector WorldLocation, FRotator WorldRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCameraFix* GetFixedCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCameraWorkEventName() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyFixedCamera();
    
};

