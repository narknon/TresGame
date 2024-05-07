#include "TresSpawnPointManagementVolume.h"

void ATresSpawnPointManagementVolume::SetWeldOuter(bool WeldOuter) {
}

bool ATresSpawnPointManagementVolume::GetWeldOuter() const {
    return false;
}

ATresSpawnPointManagementVolume::ATresSpawnPointManagementVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WeldOuterInitial = false;
}

