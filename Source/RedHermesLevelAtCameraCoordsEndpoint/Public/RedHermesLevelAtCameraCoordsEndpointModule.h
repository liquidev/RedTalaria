﻿// Copyright (c) CD PROJEKT S.A. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class FRedHermesLevelAtCameraCoordsEndpointModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
