#pragma once
#include "CoreMinimal.h"
#include "TresSharedActor.h"
#include "WinniePuzzleType.h"
#include "TresWinniePuzzleManager.generated.h"

class UTresWinnieData;
class ATresWinniePuzzleBase;
class ATresWinniePuzzleWallVolume;
class ATresWinniePlayerController;

UCLASS(Blueprintable)
class ATresWinniePuzzleManager : public ATresSharedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresWinnieData* DataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldMapPlayerStartTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VegetableFieldMapPlayerStartTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FruitFieldMapPlayerStartTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlowerFieldMapPlayerStartTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveDataFlagName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleBase* m_pPuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresWinniePuzzleWallVolume*> m_wallVolumes;
    
public:
    ATresWinniePuzzleManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StoreWallVolume(TArray<ATresWinniePuzzleWallVolume*> volumes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    WinniePuzzleType GetPuzzleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresWinniePuzzleBase* GetPuzzle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresWinniePlayerController* GetController() const;
    
};

