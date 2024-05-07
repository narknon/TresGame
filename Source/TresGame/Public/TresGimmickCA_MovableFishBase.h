#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresGimmickCA_TickControlInterface.h"
#include "TresGimmickCA_MovableFishBase.generated.h"

class ASQEX_SplineActor;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickCA_MovableFishBase : public AActor, public ITresGimmickCA_TickControlInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEX_SplineMoverExecutor SplineMover;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_TickEnableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableMove;
    
public:
    ATresGimmickCA_MovableFishBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* Actor, bool bAutoMoveStart);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMove(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrival();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed();
    
    
    // Fix for true pure virtual functions not being implemented
};

