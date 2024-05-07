#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WinniePuzzleShootType.h"
#include "TresSharedFixedCameraParam.h"
#include "WinniePuzzleStopElapsedTimeTiming.h"
#include "TresWinniePuzzleBase.generated.h"

class UTresWinniePuzzleWallVolumeController;
class UTresWinniePuzzleUnitController;
class UTresWinniePuzzleGuideLine;
class UTresWinniePuzzlePlayerUnitController;
class UTresWinniePuzzlePlayerController;
class UTresWinniePuzzlePowerGaugeController;
class UTresWinniePuzzleCharacterBonusController;
class UTresWinniePuzzleShootTimesController;
class UTresWinniePuzzleRule;
class UTresWinniePuzzleResult;
class UTresWinniePuzzleTurnController;
class UTresWinniePuzzleBonusController;
class UTresWinniePuzzleScoreController;
class UTresWinniePuzzleBucketController;
class UTresWinniePuzzleObjectPool;
class UTresWinniePuzzleSoundPlayer;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class ATresWinniePuzzleBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSharedFixedCameraParam FixedCameraInitialParamRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSharedFixedCameraParam DebugFixedCameraInitialParamRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugFixedCameraMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugFixedCameraFOVChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaycastDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingDegreeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingDegreeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeedNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSpeedAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AimingDegreeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleShootType ShootType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleStopElapsedTimeTiming StopElapsedTimeTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GraceTimeOfStopElapsedTimeCounting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveDataLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIAppearWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleUnitController* UnitCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzlePlayerUnitController* PlayerUnitCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleGuideLine* GuideLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleWallVolumeController* WallVolumeCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzlePlayerController* PlayerCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzlePowerGaugeController* PowerGaugeCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleCharacterBonusController* CharacterBonusCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleShootTimesController* ShootTimesCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleRule* Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleResult* GameResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleTurnController* TurnCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleBonusController* BonusCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleScoreController* ScoreCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleBucketController* BucketCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleObjectPool* ObjectPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWinniePuzzleSoundPlayer* SoundPlayer;
    
public:
    ATresWinniePuzzleBase(const FObjectInitializer& ObjectInitializer);
};

