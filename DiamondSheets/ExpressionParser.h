#pragma once

#include "AntlrGrammar/DiamondSheetsBaseVisitor.h"
#include <Cell.h>

class ExpressionParser : public DiamondSheetsBaseVisitor
{
	std::vector<std::vector<Cell>>* _gridData;

public:
	ExpressionParser(std::vector<std::vector<Cell>>* gridData) : _gridData(gridData) { }

	std::any visitNumericAtomExp(DiamondSheetsParser::NumericAtomExpContext* ctx) override;
	std::any visitAddSubExp(DiamondSheetsParser::AddSubExpContext* ctx) override;
	std::any visitMulDivModExp(DiamondSheetsParser::MulDivModExpContext* ctx) override;
	std::any visitParenthesisExp(DiamondSheetsParser::ParenthesisExpContext* ctx) override;
	std::any visitPowerExp(DiamondSheetsParser::PowerExpContext* ctx) override;
	std::any visitCompExp(DiamondSheetsParser::CompExpContext* ctx) override;
	std::any visitCellIdAtomExp(DiamondSheetsParser::CellIdAtomExpContext* ctx) override;

	std::vector<int> To10Base(std::string cellId);
};