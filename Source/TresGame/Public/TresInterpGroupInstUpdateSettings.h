#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMeshComponentUpdateFlag -FallbackName=EMeshComponentUpdateFlag
#include "TresInterpGroupInstUpdateSettings.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresInterpGroupInstUpdateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EMeshComponentUpdateFlag::Type> m_UpdateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UpdateRateOptimizations;
    
    FTresInterpGroupInstUpdateSettings();
};

