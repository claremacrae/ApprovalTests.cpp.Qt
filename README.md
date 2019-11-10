<!--
GENERATED FILE - DO NOT EDIT
This file was generated by [MarkdownSnippets](https://github.com/SimonCropp/MarkdownSnippets).
Source File: /mdsource/README.source.md
To change this file edit the source file and then execute ./run_markdown_templates.sh.
-->

<a id="top"></a>

# ApprovalTests.cpp.Qt

<a href="https://github.com/approvals/ApprovalTests.cpp.Qt/releases/download/v.0.0.1/ApprovalTestsQt.v.0.0.1.hpp">Download the latest version (v.0.0.1) of the **single header file** here.</a>

<!-- toc -->
## Contents

  * [Purpose](#purpose)
  * [Features](#features)
  * [Requirements](#requirements)
  * [Getting Started](#getting-started)
  * [Limitations](#limitations)
  * [Reference](#reference)
    * [Setting up your main](#setting-up-your-main)
    * [Verifying a QImage](#verifying-a-qimage)
    * [Verifying a QTableView, e.g. QTableWidget](#verifying-a-qtableview-eg-qtablewidget)
<!-- endtoc -->


## Purpose

To enable easy, convenient testing and [Approval Testing](https://github.com/approvals/ApprovalTests.cpp.Qt) of [Qt](https://www.qt.io)-based C++ code by using modern test frameworks.

Currently [Catch](https://github.com/catchorg/Catch2) is supported.

## Features

* Creates a QApplication automatically, so that tests that create Qt widgets can run.
* Verify `QImage`. You give it a QImage, it saves this as a .png, and then verifies it by reading it back in.
* Verify `QTableView`. You give it a QTableView, and it saves its text contents in a tab-separated .tsv file.
* Augments ApprovalTests so that .png files are read in to QImage objects which are then compared - this is more reliable and portable than the default behaviour of doing character-by-character comparison of .png files on disk.
* Provides nicely-readable string representations of [a growing range of Qt classes](https://github.com/approvals/ApprovalTests.cpp.Qt/blob/master/ApprovalTestsQt/integrations/catch/Catch2QtStringMaker.h).

## Requirements

* [Qt](https://www.qt.io)'s Widgets and Tests modules

## Getting Started

You can download the [Starter Project](https://github.com/approvals/ApprovalTests.cpp.Qt.StarterProject) and start experimenting.

## Limitations

* **IMPORTANT:** Do not use the [Qt Test macros](https://doc.qt.io/qt-5/qtest.html#macros), such as `QCOMPARE`, `QVERIFY`, `QTRY_COMPARE` and so on. **Currently, any test failures of all any of the Qt Test macros will be silently swallowed, and tests will spuriously pass.**
* Please note that this is a very early implementation, and there is not yet any promise of a stable interface.

## Reference

### Setting up your main

<!-- snippet: catch_2_qt_main -->
<a id='snippet-catch_2_qt_main'/></a>
```cpp
// main.cpp:
#define APPROVALS_CATCH_QT
#include "ApprovalTestsQt/integrations/catch/Catch2QtApprovals.h"
```
<sup>[snippet source](/tests/Catch2_Tests/main.cpp#L1-L5) / [anchor](#snippet-catch_2_qt_main)</sup>
<!-- endsnippet -->

### Verifying a QImage

In general, it's better to verify behaviour of objects rather than their appearance. However, if you do wish to test the contents of a QImage, this will work well.

<!-- snippet: verify_qimage -->
<a id='snippet-verify_qimage'/></a>
```cpp
QImage image(10, 20, QImage::Format_RGB32);
image.fill(Qt::red);
ApprovalTestsQt::verifyQImage(image);
```
<sup>[snippet source](/tests/Catch2_Tests/ApprovalsQtTests.cpp#L31-L35) / [anchor](#snippet-verify_qimage)</sup>
<!-- endsnippet -->

### Verifying a QTableView, e.g. QTableWidget

<!-- snippet: verify_table_view -->
<a id='snippet-verify_table_view'/></a>
```cpp
QTableWidget tableWidget;
populateTable(tableWidget);
ApprovalTestsQt::verifyQTableView(tableWidget);
```
<sup>[snippet source](/tests/Catch2_Tests/ApprovalsQtTests.cpp#L44-L48) / [anchor](#snippet-verify_table_view)</sup>
<!-- endsnippet -->
