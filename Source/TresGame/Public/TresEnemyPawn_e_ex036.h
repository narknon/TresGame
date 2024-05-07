#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex036.generated.h"

class ATresAccessory_e_ex036_WaterBallManager;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex036 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMagicSquare;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccessory_e_ex036_WaterBallManager> m_pro_WaterBallManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresAccessory_e_ex036_WaterBallManager* m_WaterBallManager;
    
public:
    ATresEnemyPawn_e_ex036(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsMagicSquare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinMoveUp() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForcingCancelMagicSquare();
    
};

