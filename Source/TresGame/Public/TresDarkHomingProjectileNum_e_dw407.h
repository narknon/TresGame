#pragma once
#include "CoreMinimal.h"
#include "TresDarkHomingProjectileNum_e_dw407.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileNum_e_dw407 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_ForwardProjectileNum;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_BackwardProjectileNum;
    
    TRESGAME_API FTresDarkHomingProjectileNum_e_dw407();
};

