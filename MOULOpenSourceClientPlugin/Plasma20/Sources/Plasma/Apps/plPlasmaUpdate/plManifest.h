/*==LICENSE==*

CyanWorlds.com Engine - MMOG client, server and tools
Copyright (C) 2011  Cyan Worlds, Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

You can contact Cyan Worlds, Inc. by email legal@cyan.com
 or by snail mail at:
      Cyan Worlds, Inc.
      14617 N Newport Hwy
      Mead, WA   99021

*==LICENSE==*/
#ifndef plManifest_h_inc
#define plManifest_h_inc

#include "hsTypes.h"
#include "plFileGrabber.h"
#include <vector>
#include <string>

class plManifestFile;

typedef void (*ProgressFunc)(const char* name, int progDelta);
typedef void (*LogFunc)(const char* format, ...);

class plManifest
{
protected:
	std::string fBasePath;
	char* fManifestName;

	typedef std::vector<plManifestFile*> FileVec;
	FileVec fFiles;

	UInt32 fDownloadFiles;
	UInt32 fDownloadBytes;

	bool fDirtySums;

	LogFunc fLog;

	bool IDecompressSound(plManifestFile* file);

	plManifestFile* IFindFile(const char* name);

	const char* IGetCacheDir();
	void IReadCache(ProgressFunc progress);
	void IWriteCache();

public:
	plManifest(LogFunc log);
	~plManifest();

	bool Read(hsStream* mfsStream, const char* basePath, const char* mfsName);

	void	ValidateFiles(ProgressFunc progress);
	void	DownloadUpdates(ProgressFunc progress, plFileGrabber* grabber);

	int		NumFiles() { return fFiles.size(); }
	UInt32	NumDownloadFiles() { return fDownloadFiles; }
	UInt32	DownloadSize() { return fDownloadBytes; }
};

#endif // plManifest_h_inc