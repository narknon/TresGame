#pragma once
#include "CoreMinimal.h"
#include "TresHitActor_e_he90x_Setup.generated.h"

USTRUCT(BlueprintType)
struct FTresHitActor_e_he90x_Setup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHeight;
    
    TRESGAME_API FTresHitActor_e_he90x_Setup();
};

