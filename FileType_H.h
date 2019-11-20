#ifndef _FILETYPE_H_H_
#define _FILETYPE_H_H_

#include "FileTypeBase.h"

struct FileType_H : public FileTypeBase {
    FileType_H(bool ignorePrepStuff, unsigned minChars);

    ILineFilterPtr CreateLineFilter() const override;

    std::string GetCleanLine(const std::string& line) const override;

    bool IsPreprocessorDirective(const std::string& line) const override;
};

#endif
