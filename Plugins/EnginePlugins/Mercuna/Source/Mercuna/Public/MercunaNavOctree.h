#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMerOctreeDebugDrawMode.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNavOctree.generated.h"

class UMerNavOctreeRenderingComponent;
class UMercunaPath;

UCLASS(NotPlaceable)
class MERCUNA_API AMercunaNavOctree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    float CellSize;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    int32 MinPawnRadius;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite)
    int32 MaxPawnRadius;
    
private:
    UPROPERTY(Transient, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
    EMerOctreeDebugDrawMode DebugDrawMode;
    
    UPROPERTY(Instanced, Transient, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
    UMerNavOctreeRenderingComponent* MerNavOctreeRenderingComponent;
    
    UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
    bool bBuildAsSublevel;
    
    UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
    bool bNeedsRebuild;
    
    UPROPERTY(NonPIEDuplicateTransient)
    FVector m_origin;
    
public:
    AMercunaNavOctree();
    UFUNCTION(BlueprintCallable)
    void Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit);
    
    UFUNCTION(BlueprintCallable)
    void IsNavigableMulti(const TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results);
    
    UFUNCTION(BlueprintCallable)
    void IsNavigable(FVector Position, float NavigationRadius, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathToLocation(FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathToActor(FVector Start, AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength);
    
    UFUNCTION(BlueprintCallable)
    void ClampToNavigable(FVector Position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    void CheckReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength, bool& Result);
    
};

