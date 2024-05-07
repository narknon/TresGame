#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipFSMState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipFSMPlayerStateBase.generated.h"

class USceneComponent;
class ATresGumiShipPlayerPawnBase;
class UTresGumiShipPlayerMovementCompoBase;
class UTresGumiShipEffectSetComponent;
class ATresGumiShipPlayerControllerDefault;

UCLASS(Blueprintable)
class UTresGumiShipFSMPlayerStateBase : public UTresGumiShipFSMState {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerStateBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _WasJustReleased(const FString& rstrID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _WasJustPressed(const FString& rstrID) const;
    
    UFUNCTION(BlueprintCallable)
    void _SetNoBody(bool bIn, const float fTimer);
    
    UFUNCTION(BlueprintCallable)
    void _SetInvincibleWithTimer(bool bIn, const float fTimer);
    
    UFUNCTION(BlueprintCallable)
    void _SetInvincible(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetEventMode(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetEnableOperation(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetAvoiding(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _PlaySoundAtLocation(const int32 dAssetID, const FVector& vrLocation, const FRotator& rRotation, float fVolumeMultiplier, float fPitchMultiplier, float fStartTime);
    
    UFUNCTION(BlueprintCallable)
    void _PlaySound2D(const int32 dAssetID, float fVolumeMultiplier, float fPitchMultiplier, float fStartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D _GetStickValue(const FString& rstrID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipPlayerPawnBase* _GetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGumiShipPlayerMovementCompoBase* _GetMovementCompo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* _GetModelBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGumiShipEffectSetComponent* _GetEffectSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float _GetDownTime(const FString& rstrID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipPlayerControllerDefault* _GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float _GetAnalogValue(const FString& rstrID) const;
    
};

