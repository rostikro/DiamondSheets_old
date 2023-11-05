
// Generated from DiamondSheets.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "DiamondSheetsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DiamondSheetsParser.
 */
class  DiamondSheetsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DiamondSheetsParser.
   */
    virtual std::any visitNumericAtomExp(DiamondSheetsParser::NumericAtomExpContext *context) = 0;

    virtual std::any visitPowerExp(DiamondSheetsParser::PowerExpContext *context) = 0;

    virtual std::any visitMulDivModExp(DiamondSheetsParser::MulDivModExpContext *context) = 0;

    virtual std::any visitCellIdAtomExp(DiamondSheetsParser::CellIdAtomExpContext *context) = 0;

    virtual std::any visitCompExp(DiamondSheetsParser::CompExpContext *context) = 0;

    virtual std::any visitParenthesisExp(DiamondSheetsParser::ParenthesisExpContext *context) = 0;

    virtual std::any visitAddSubExp(DiamondSheetsParser::AddSubExpContext *context) = 0;


};

