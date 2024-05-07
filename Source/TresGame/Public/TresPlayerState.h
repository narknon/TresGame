#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TresPlayerState.generated.h"

class ATresPlayerState;
class UDamageType;

UCLASS(Blueprintable)
class ATresPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamNo, meta=(AllowPrivateAccess=true))
    int32 m_TeamNo;
    
public:
    ATresPlayerState(const FObjectInitializer& ObjectInitializer);
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamNo();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void InformAboutKill(ATresPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, ATresPlayerState* KilledPlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDeath(ATresPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, ATresPlayerState* KilledPlayerState);
    
};

