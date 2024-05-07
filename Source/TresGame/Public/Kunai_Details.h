#pragma once
#include "CoreMinimal.h"
#include "EKunaiType.h"
#include "Kunai_Details.generated.h"

USTRUCT(BlueprintType)
struct FKunai_Details {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EKunaiType> m_KunaiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Timing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Velocity;
    
    TRESGAME_API FKunai_Details();
};

