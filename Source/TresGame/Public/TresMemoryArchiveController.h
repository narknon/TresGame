#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMemoryArchiveController.generated.h"

class UTresUIManager;
class UTresUIP_MemoryArchive;
class UDataTable;

UCLASS(Blueprintable)
class UTresMemoryArchiveController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MemoryArchive* m_MemoryArchive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_MemoryArchiveData;
    
public:
    UTresMemoryArchiveController();
};

