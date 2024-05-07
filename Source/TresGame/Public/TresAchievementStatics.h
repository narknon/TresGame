#pragma once
#include "CoreMinimal.h"
#include "ETresAchievement.h"
#include "UObject/Object.h"
#include "TresAchievementStatics.generated.h"

UCLASS(Abstract, Blueprintable, NotPlaceable)
class UTresAchievementStatics : public UObject {
    GENERATED_BODY()
public:
    UTresAchievementStatics();
    UFUNCTION(BlueprintCallable)
    static void TresUnlockAchievement(ETresAchievement ID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void NoContinueClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleCheatCodeOnForAchievement();
    
};

