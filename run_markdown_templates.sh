#!/usr/bin/env bash

# Commented-out for now, until I get netcoreapp3.0 (.NETCoreApp,Version=v3.0)
# dotnet tool update  -g MarkdownSnippets.Tool
mdsnippets --exclude cmake-build --toc-level 5 --readonly true --header "GENERATED FILE - DO NOT EDIT\nThis file was generated by [MarkdownSnippets](https://github.com/SimonCropp/MarkdownSnippets).\nSource File: {relativePath}\nTo change this file edit the source file and then execute ./run_markdown_templates.sh."