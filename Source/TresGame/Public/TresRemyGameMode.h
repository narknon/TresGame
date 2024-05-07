#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGameModeBase.h"
#include "UObject/NoExportTypes.h"
#include "TresRemyGameMode.generated.h"

class ATresRemyGameManager;
class ATresRemyPawn;
class ATresRemyPawnBase;
class UTresRemyData;

UCLASS(Blueprintable, NonTransient)
class ATresRemyGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyGameManager> GameManagerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawn> PawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> RemyRatPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PawnInitialLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresRemyData* DataRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyGameManager* m_pGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawn* m_pPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pRemyRatPawn;
    
public:
    ATresRemyGameMode(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyPawnBase* GetRemyRatPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyPawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyGameManager* GetGameManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresRemyData* GetData() const;
    
};

