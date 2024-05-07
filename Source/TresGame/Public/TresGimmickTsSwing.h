#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickTsSwing.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class UCurveFloat;
class AActor;
class ATresCharPawnBase;

UCLASS(Abstract, Blueprintable)
class ATresGimmickTsSwing : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FadeCurve;
    
    ATresGimmickTsSwing(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAction(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwingStartSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwingEndSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void LeaveAction(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    void EntryAction(ATresCharPawnBase* pPawn, USceneComponent* pAttachedParent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAction(bool Broken);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginAction();
    
};

