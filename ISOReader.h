

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//                                 用于读取ISO文件
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////



#pragma once
#include <Windows.h>
#include <imapi2fs.h>


//从一个流中打开映像
HRESULT __fastcall IsoOpenImage(IStream* pStream, IFileSystemImage** ppFileSystemImage);