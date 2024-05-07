#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresPlayerSpecificActionID.h"
#include "UObject/Object.h"
#include "ETresAnimNotifyBpEventID.h"
#include "ETresCommandKind.h"
#include "ETresActorSpecificActionID.h"
#include "ETresStateID.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresPlayerStateEvent.generated.h"

class AActor;
class ATresNote;
class ATresCharPawnBase;
class UCameraShake;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class UTresPlayerStateEvent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StEvName;
    
public:
    UTresPlayerStateEvent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerEndCommandAction(ETresCommandKind CommandKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerDtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerCtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerBeginCommandAction(ETresCommandKind CommandKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAnimNotifyStartBpEvent(ATresCharPawnBase* SendActor, FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAnimNotifyEndBpEvent(ATresCharPawnBase* SendActor, FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorSpecificAction(ETresActorSpecificActionID ActionID, AActor* SendActor, int32 SubID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Event_EnemyPopCamera(ATresNote* Note, const FString& Parameter, float Distance, const FVector& TargetOffset, const FRotator& Rotation, float FOV, TSubclassOf<UCameraShake> Shake, float EndDelay, float EndBlendTime);
    
};

