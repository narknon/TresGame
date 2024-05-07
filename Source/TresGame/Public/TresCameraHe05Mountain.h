#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormal.h"
#include "TresCameraHe05Mountain.generated.h"

class ATresCameraHe05Mountain;
class UCurveFloat;
class UObject;

UCLASS(Blueprintable)
class ATresCameraHe05Mountain : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TitanDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DistanceCurve;
    
public:
    ATresCameraHe05Mountain(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraHe05Mountain* BP_SpawnTresCameraHe05Mountain(UObject* WorldContextObject, TSubclassOf<ATresCameraHe05Mountain> CameraClass, const FName CameraName);
    
};

