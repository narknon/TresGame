#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSpaceDivisionManager.h"
#include "TresBxGimmickCarsManager.generated.h"

class AActor;
class USceneComponent;
class ATresCharPawnBase;

UCLASS(Abstract, Blueprintable)
class ATresBxGimmickCarsManager : public ATresGimmickSpaceDivisionManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NoLightsFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CarLODIndex;
    
    ATresBxGimmickCarsManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetStopCars(bool bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePause(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void RemoveObstacleObject(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void RegistObstacleObject(AActor* pActor, bool bMovable, float fBoundsRadius);
    
    UFUNCTION(BlueprintCallable)
    void OnMovePawnDelete(ATresCharPawnBase* InTargetPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnMovePawnCreate(ATresCharPawnBase* InTargetPawn);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangeGimmickPause(bool bPause);
    
};

