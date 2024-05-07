#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "ETresFloorTestMode.h"
#include "TresAIUtil.generated.h"

class AActor;
class ATresAIPawnBase;
class AController;
class ATresCharPawnBase;
class UNavigationPath;

UCLASS(Blueprintable)
class UTresAIUtil : public UObject {
    GENERATED_BODY()
public:
    UTresAIUtil();
    UFUNCTION(BlueprintCallable)
    static void WaitForRunningBehaviorTree(UObject* WorldContext, FLatentActionInfo LatentInfo, ATresAIPawnBase* AIPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTurnSafe(const FVector& BaseLocation, const FVector& CurrentVector, const FVector& DesiredVector, float MoveSpeed, float RotationYawSpeed, AController* Querier, float DivAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDirectPath(const FVector& Start, const FVector& End, UObject* WorldContext, AActor* PathfindingContext, bool bFailedRaycast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRailSlideLocations(TArray<FVector>& Result, ATresCharPawnBase* Pawn);
    
    UFUNCTION(BlueprintPure)
    static bool GetFloorLocation(FVector& Result, const UObject* WorldContext, FVector Location, const AActor* LocationContext, float ProjectionDistance, float AddedRadius, TEnumAsByte<ETresFloorTestMode::Type> TestMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorNavigationRadius(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorCollisionRadius(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorAIRadius(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BP_DirectionAtClosestPointOnPath(UNavigationPath* Path, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BP_ClosestPointOnPath(UNavigationPath* Path, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void AITurnTo(UObject* WorldContext, FLatentActionInfo LatentInfo, ATresAIPawnBase* AIPawn, FVector TargetLocation, AActor* TargetActor);
    
};

