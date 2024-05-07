#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresSpawnPointSet.h"
#include "TresSpawnPointManagementVolume.generated.h"

class ATresSpawnPointManagementVolume;

UCLASS(Blueprintable)
class TRESGAME_API ATresSpawnPointManagementVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_WeldOuterInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSpawnPointSet> m_PointSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresSpawnPointManagementVolume*> m_InnerVolumes;
    
public:
    ATresSpawnPointManagementVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetWeldOuter(bool WeldOuter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeldOuter() const;
    
};

