#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickBalanceBall.h"
#include "TresGimmickFzTamanori.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class ATresTriggerBox;
class AActor;

UCLASS(Blueprintable)
class ATresGimmickFzTamanori : public ATresGimmickBalanceBall {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* TriggerSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BreakItself;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAddThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveThicknessMaxScale;
    
    ATresGimmickFzTamanori(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerOverlapped(ATresTriggerBox* TriggerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTamanoriScale(float fScale);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetBalanceBallMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BreakBalanceBall();
    
};

