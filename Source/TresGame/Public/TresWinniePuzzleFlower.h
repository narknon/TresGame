#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusBombParam.h"
#include "TresWinniePuzzleFlower.generated.h"

class UTresWinniePuzzlePoohController;
class UTresWinniePuzzleHoneypotController;
class ATresWinniePuzzleRabbitPawn;
class ATresWinniePuzzlePoohPawn;
class ATresWinniePuzzleGopherPawn;

UCLASS(Blueprintable)
class ATresWinniePuzzleFlower : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleRabbitPawn> RabbitPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzlePoohPawn> PoohPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWinniePuzzleGopherPawn> GopherPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleCharacterBonusBombParam BombParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleHoneypotController* HoneypotCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzlePoohController* PoohCtrl;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzlePoohPawn* m_pPoohPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleGopherPawn* m_pGopherPawn;
    
public:
    ATresWinniePuzzleFlower(const FObjectInitializer& ObjectInitializer);
};

