#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TresControllerInterface.h"
#include "TresPlayerControllerLowerBase.generated.h"

class ATresCameraDebug;
class ATresCameraManager;

UCLASS(Blueprintable)
class ATresPlayerControllerLowerBase : public APlayerController, public ITresControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraManager* m_pCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraDebug* m_pCameraDebug;
    
public:
    ATresPlayerControllerLowerBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTresCameraDebugStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTresCameraDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OnDebugPauseFrameSkip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OnDebugPauseEnableGamePad();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OnDebugPauseEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCameraManager* GetTresCameraManager() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableDebugPauseFunction(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowMatineeTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCameraDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetGameFrameRate(float InMaxFrame, float InMinFrame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetFixedDeltaTime(float InFrameRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraZero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraSpeedScale(float SpeedScale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraFieldOfView(float FOV);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGamePadSpecialLeftDebugPause(int32 debugPauseStyle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCameraShutOutFade(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugCameraCollCheck(uint8 EnableNo);
    
    
    // Fix for true pure virtual functions not being implemented
};

