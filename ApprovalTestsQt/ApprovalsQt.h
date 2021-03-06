#ifndef APPROVALTESTS_CPP_QT_APPROVALSQT_H
#define APPROVALTESTS_CPP_QT_APPROVALSQT_H

#include "ApprovalTestsQt/integrations/LoadApprovals.h"
#include "ApprovalTestsQt/writers/QImageApprovalWriter.h"
#include "ApprovalTestsQt/writers/QTableViewWriter.h"

namespace ApprovalTestsQt
{
    inline void
    verifyQImage(const QImage& image,
                 const ApprovalTests::Options& options = ApprovalTests::Options())
    {
        QImageApprovalWriter image_writer(image);
        ApprovalTests::Approvals::verify(image_writer, options);
    }

    inline void
    verifyQTableView(const QTableView& tableWidget,
                     const ApprovalTests::Options& options = ApprovalTests::Options())
    {
        QTableViewWriter table_writer(tableWidget);
        ApprovalTests::Approvals::verify(table_writer, options);
    }
} // namespace ApprovalTestsQt

#endif //APPROVALTESTS_CPP_QT_APPROVALSQT_H
