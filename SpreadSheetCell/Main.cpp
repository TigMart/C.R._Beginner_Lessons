// ConsoleApplication1.cpp :

#include "Spreadsheetcell.h"


int main()
{
    Spreadsheetcell myCell(5.6), anotherCell(4.4);
    //myCell.set_value(6);
    //anotherCell.set_value(myCell.get_value());
    std::cout << "Cell 1: " << myCell.get_value() << std::endl;
    std::cout << "Cell 2: " << anotherCell.get_value() << std::endl;
    Spreadsheetcell* myCellp = new Spreadsheetcell(5);
    myCellp->set_value(3.7);
    std::cout << "Cell 1: " << myCellp->get_value() << " " << myCellp->get_string() << std::endl;
    delete myCellp;
    myCellp = nullptr;
    Spreadsheetcell anothercell;
    anothercell = myCell;
    std::cout << anothercell.get_value() << " " << anothercell.get_string();
    /*Spreadsheetcell aThirdCell("test");
    Spreadsheetcell aFourthCell[3] = { Spreadsheetcell(0),Spreadsheetcell(23),Spreadsheetcell(41) };
    Spreadsheetcell* aThirdCellp = new Spreadsheetcell("4.4");
    std::cout << "aThirdCell: " << aThirdCell.get_value() << std::endl;
    std::cout << "aFourthcell 0: " << aFourthCell[0].get_value() << std::endl;
    std::cout << "aFourthcell 1: " << aFourthCell[1].get_value() << std::endl;
    std::cout << "aFourthcell 2: " << aFourthCell[2].get_value() << std::endl;
    std::cout << "aThirdCellp: " << aThirdCellp->get_value() << std::endl;
    delete aThirdCellp;
    aThirdCellp = nullptr; */

}


/*
int main(int argc, char** argv)
{
    /*Spreadsheetcell myCell(5);
    if (myCell.get_value() == 5) {
        Spreadsheetcell anotherCell(6);
        std::cout << "obj myCell: " << anotherCell.get_value() << std::endl;
    }
    std::cout << "obj myCell: " << myCell.get_value() << std::endl;
    Spreadsheetcell* cellPtr1 = new Spreadsheetcell(5);
    Spreadsheetcell* cellPtr2 = new Spreadsheetcell(6);

    std::cout << "CellPrt1: " << cellPtr1->get_value() << std::endl;
    std::cout << "CellPrt2: " << cellPtr2->get_value() << std::endl;
    delete cellPtr1;
    delete cellPtr2;
    cellPtr1 = nullptr;
    cellPtr2 = nullptr;

    return 0;
}*/




