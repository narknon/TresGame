#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "TresControllerInterface.h"
#include "ETresCharInputType.h"
#include "TresAIController.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class ATresAIController : public AAIController, public ITresControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresCharInputType> m_CharInputType;
    
public:
    ATresAIController(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetMyTarget(AActor* inNewMyTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetDestination(const FVector& inNewDestination);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElapsedTimeFromDamaged(float InTime, const AActor* InTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorRightSide(AActor* inOtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalDistanceToMyTarget(bool inCollision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalDistanceToActor(AActor* inOtherActor, bool inCollision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMyTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalDistanceToMyTarget(bool inCollision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalDistanceToActor(AActor* inOtherActor, bool inCollision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToMyTarget(bool inCollision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToActor(AActor* inOtherActor, bool inCollision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoopTeamMemberID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoopTeamID() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* FindMyTarget(bool inFindGimmick);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetHeadFocus(AActor* NewFocus);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetHeadFocalPoint(FVector Fp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BP_GetHeadFocusActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetHeadFocalPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearHeadFocus();
    
    
    // Fix for true pure virtual functions not being implemented
};

