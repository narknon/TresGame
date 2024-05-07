#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipSplineEventType.h"
#include "Components/ActorComponent.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "TresGumiShipEnemyGroupManager.generated.h"

class ATresGumiShipEnemyPawnBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipEnemyGroupManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGroupMemberEnemyDeadSignature, const ATresGumiShipEnemyPawnBase*, DeadEnemy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyGroupWipeOutSignature, const FTresGumiShipEnemyGroupWipeOutData&, EnemyGroupWipeOutData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyGroupDisappearSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyGroupAppearSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupAppearSignature OnEnemyGroupAppear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupDisappearSignature OnEnemyGroupDisappear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupWipeOutSignature OnEnemyGroupWipeOut;
    
    UTresGumiShipEnemyGroupManager();
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveDeceleration(float Deceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveAcceleration(float Acceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseSplineMove(bool bReverseMoveEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSplineMoveSpeed(float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLoopSplineMove(bool bLoopMoveEnable);
    
    UFUNCTION(BlueprintCallable)
    void PauseSplineMove(bool bPauseEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReverseSplineMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseSplineMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoopSplineMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrivedSplineEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineMoveDeceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineMoveAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSplineMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipEnemyPawnBase* GetGroupMemberEnemyListTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMoveRouteSplineIndex() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeEnemyGroupMoveRouteSpline(int32 NewMoveRouteSplineIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnSplinePathMoveEvent(ETresGumiShipSplineEventType eEventType);
    
    UFUNCTION(BlueprintCallable)
    void _OnGroupMemberEnemyDead(ATresGumiShipEnemyPawnBase* pDeadEnemy);
    
    UFUNCTION(BlueprintCallable)
    void _OnGroupMemberEnemyAppear(ATresGumiShipEnemyPawnBase* pAppearEnemy);
    
};

