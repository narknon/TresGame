#pragma once
#include "CoreMinimal.h"
#include "TresSharedCheatManager.h"
#include "TresRemyCheatManager.generated.h"

UCLASS(Blueprintable)
class UTresRemyCheatManager : public UTresSharedCheatManager {
    GENERATED_BODY()
public:
    UTresRemyCheatManager();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRemyUMGDebugInfo();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RemySetToNextRank();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void RemyResetUnlockDishLevelPoint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeStar5NormalRecipeAllGreatSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeStar4NormalRecipeAllGreatSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeStar3NormalRecipeAllGreatSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeStar2NormalRecipeAllGreatSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeStar1NormalRecipeAllGreatSuccess();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeAllSpecialRecipeGreatSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyMakeAllNormalRecipeGreatSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyGetAllSpecialRecipeFoodstuff10();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void RemyGetAllSpecialRecipeFoodstuff1();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RemyGetAllNormalRecipeFoodstuff10();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void RemyGetAllNormalRecipeFoodstuff1();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemyChangeShowFinishOperationUITiming(int32 timing);
    
    UFUNCTION(Exec)
    void RemyAddUnlockDishLevelPoint(int16 Point);
    
};

