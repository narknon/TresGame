#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ETresEnemyToyKind.h"
#include "TresEnemyToyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresEnemyToyComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyToyOnPossession);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyToyKind> m_ToyKind;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyToyOnPossession OnPossession;
    
public:
    UTresEnemyToyComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse() const;
    
};

