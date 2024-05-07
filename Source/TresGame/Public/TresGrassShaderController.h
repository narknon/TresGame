#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGrassShaderController.generated.h"

UCLASS(Blueprintable)
class ATresGrassShaderController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_WindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WindSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WindPower;
    
    ATresGrassShaderController(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGrassParameter(int32 InIndex, FVector InPosition, float InRadius, float inPower, int32 InType, float inDetailPower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MulGrassPower(int32 InIndex, float inPower);
    
};

