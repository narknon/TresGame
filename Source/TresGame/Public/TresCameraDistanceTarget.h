#pragma once
#include "CoreMinimal.h"
#include "TresCameraTarget.h"
#include "TresCameraDistanceTarget.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresCameraDistanceTarget : public ATresCameraTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Distance;
    
public:
    ATresCameraDistanceTarget(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDistance(float Distance, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultDistance() const;
    
};

