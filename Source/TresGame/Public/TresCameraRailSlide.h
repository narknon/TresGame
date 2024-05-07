#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraRailSlide.generated.h"

class AActor;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraRailSlide : public ATresCameraNormal {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_RailTargetActor;
    
public:
    ATresCameraRailSlide(const FObjectInitializer& ObjectInitializer);
};

