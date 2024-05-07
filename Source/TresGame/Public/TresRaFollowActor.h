#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "EFollowActorState.h"
#include "TresOnFollowActorTouchedDelegate.h"
#include "TresRaFollowActor.generated.h"

class ATresRaFollowActor;
class UTresDebugEditorRaFollowActorComponent;
class USplineComponent;

UCLASS(Abstract, Blueprintable)
class ATresRaFollowActor : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GroupNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ReactDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_FollowPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bFollowYawLock: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bFollowRotationLock: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_EscapePositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FollowtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccelerateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationAdjustDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnFollowActorTouched OnFollowActorTouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresDebugEditorRaFollowActorComponent* EditorInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_Spline;
    
public:
    ATresRaFollowActor(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SetActorState(EFollowActorState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFollowActorTouched(int32 groupNumber);
    
    UFUNCTION(BlueprintCallable)
    static void InitGroup(TArray<ATresRaFollowActor*> groupActors);
    
    UFUNCTION(BlueprintCallable)
    void _OnGroupActorTouched(int32 groupNumber);
    
};

