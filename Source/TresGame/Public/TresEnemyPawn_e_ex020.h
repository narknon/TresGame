#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresDieParam_e_ex020.h"
#include "TresEnemyPawn_e_ex020.generated.h"

class UTresEnemyToyComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex020 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresDieParam_e_ex020 m_DieParam;
    
public:
    ATresEnemyPawn_e_ex020(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetToyComponentList(TArray<UTresEnemyToyComponent*>& OutList) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumToyPawnActiveOnly() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumToyPawn() const;
    
};

