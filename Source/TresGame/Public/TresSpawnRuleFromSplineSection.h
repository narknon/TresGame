#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnRuleChildGenerator.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnRuleFromSplineSection.generated.h"

class ASQEX_SplineActor;
class AActor;
class UTresGeneratorPlacePaternFromSplineBase;
class UTresRotatorRuleBase;

USTRUCT(BlueprintType)
struct FTresSpawnRuleFromSplineSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* StartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* EndActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> GeneratedClassArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> GeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FirstGeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LastGeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGeneratorPlacePaternFromSplineBase* PlacePatern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRotatorRuleBase* RotatorRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSpawnRuleChildGenerator ChildRule;
    
    TRESGAME_API FTresSpawnRuleFromSplineSection();
};

