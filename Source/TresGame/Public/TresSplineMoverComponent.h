#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETresSplineMoverMove.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresSplineMoverSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSplineMoverComponent.generated.h"

class USplineComponent;
class ASQEX_SplineActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSplineMoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEX_SplineMoverExecutor SplineMover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSplineMoverSignature OnArrival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSplineMoverMove::Type> MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float interpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Param1;
    
public:
    UTresSplineMoverComponent();
    UFUNCTION(BlueprintCallable)
    void SetSplineComponent(USplineComponent* SplineComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* Actor, bool nearest);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void SetPosRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPos(float pos);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool Loop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSplineActorTerminationPos(bool IsReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASQEX_SplineActor* GetSplineActorLast();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASQEX_SplineActor* GetSplineActorFirst();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
};

