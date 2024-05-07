#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "ETresCommandKind.h"
#include "EGimmickKG_UnionCrossAnim.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickKG_UnionCrossRide.generated.h"

class USoundBase;
class ATresCharPawnBase;
class ATresEventPawnBase;
class ASQEX_SplineActor;
class ATresGimmickKG_UnionCrossEnemy;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickKG_UnionCrossRide : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> Sound_Attacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_TurnningToAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound_Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResoundWaitTime;
    
    ATresGimmickKG_UnionCrossRide(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartUnionCross(ATresCharPawnBase* pPawn, ATresEventPawnBase* pAttachPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineSpeed(float fSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* splineActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMoveSpeed(float AccelSpeed, float DumpingSpeed, float MaxSpeed, float BendingAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMovableLength(float Length, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimType(TEnumAsByte<EGimmickKG_UnionCrossAnim> Type, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    int32 RandomTableKey();
    
    UFUNCTION(BlueprintCallable)
    void OpenHudUx();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSplineMoveArrival();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCommand(ETresCommandKind inCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTimingFromPawn(int32 InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateAnimEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnableShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDamaged() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeRamdomTable(int32 MaxNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HitShield(ATresGimmickKG_UnionCrossEnemy* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HitEnemy(ATresGimmickKG_UnionCrossEnemy* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetShieldSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPlayerSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetPlayerRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPlayerCenter() const;
    
    UFUNCTION(BlueprintCallable)
    void EndUnionCross(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    void CloseHudUx();
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_CanbeCommand(ETresCommandKind inCommand) const;
    
    UFUNCTION(BlueprintCallable)
    void AddFixedDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    bool AddActionCommandUnionX(TEnumAsByte<ETresCommandKind> tresCommandKind, const FString& commandName, int32 ID);
    
};

