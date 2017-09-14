/*/This program was created by Coral Dixon on September 13
and is meant to calculate the worth of shares from 6
different stock in a portfolio. It also calculates the
total value of the stock portfolio.
/*/

 #include <iostream>
 #include <string>
 using namespace std;

//Main struct 
 struct Stock_Portfolio{
  char sector;
  string name;
  double share_price;
  double num_shares;
  double share_total;
  double portfolio_total;

 };
 
 int main()
 {
//Variables for stock sectors
  char auto_companies = 'A';
  char consumer_products = 'C';
  char financial_insurance = 'F';
  char industrial = 'I';
  char technology = 'T';

//FordM object & input
   Stock_Portfolio fordm;
   fordm.sector = auto_companies;
   cout << "Enter stock name: ";
   cin >> fordm.name;
   cout << "Enter stock price: ";
   cin >> fordm.share_price;
   cout << "Enter number of shares: ";
   cin >> fordm.num_shares;
   fordm.share_total = fordm.num_shares * fordm.share_price;
   fordm.portfolio_total = fordm.share_total;
   cout << endl;

//FordM output   
   cout << fordm.name << fordm.sector << endl;
   cout << "Share Price: $" << fordm.share_price << endl;
   cout << "Number of Shares: " << fordm.num_shares << endl;
   cout << "Total share price: $" << fordm.share_total << endl;
   cout << endl;

//Albertsn object & input
   Stock_Portfolio albertsn;
   albertsn.sector = consumer_products;
   cout << "Enter stock name: ";
   cin >> albertsn.name;
   cout << "Enter stock price: ";
   cin >> albertsn.share_price;
   cout << "Enter number of shares: ";
   cin >> albertsn.num_shares;
   albertsn.share_total = albertsn.num_shares * albertsn.share_price;
   albertsn.portfolio_total = albertsn.share_total + fordm.portfolio_total;
   cout << endl;

//Albertsn output
   cout << albertsn.name << albertsn.sector << endl;
   cout << "Share Price: $" << albertsn.share_price << endl;
   cout << "Number of Shares: " << albertsn.num_shares << endl;
   cout << "Total share price: $" << albertsn.share_total << endl;
   cout << endl;

//AAPL object & input
   Stock_Portfolio aapl;
   aapl.sector = technology;
   cout << "Enter stock name: ";
   cin >> aapl.name;
   cout << "Enter stock price: ";
   cin >> aapl.share_price;
   cout << "Enter number of shares: ";
   cin >> aapl.num_shares;
   aapl.share_total = aapl.num_shares * aapl.share_price;
   aapl.portfolio_total = aapl.share_total + albertsn.portfolio_total;
   cout << endl;

//AAPL output
   cout << aapl.name << aapl.sector << endl;
   cout << "Share Price: $" << aapl.share_price << endl;
   cout << "Number of Shares: " << aapl.num_shares << endl;
   cout << "Total share price: $" << aapl.share_total << endl;
   cout << endl;

//TSLA object & input
   Stock_Portfolio tsla;
   aapl.sector = auto_companies;
   cout << "Enter stock name: ";
   cin >> tsla.name;
   cout << "Enter stock price: ";
   cin >> tsla.share_price;
   cout << "Enter number of shares: ";
   cin >> tsla.num_shares;
   tsla.share_total = tsla.num_shares * tsla.share_price;
   tsla.portfolio_total = tsla.share_total + aapl.portfolio_total;
   cout << endl;
   
//TSLA output 
   cout << tsla.name << tsla.sector << endl;
   cout << "Share Price: $" << tsla.share_price << endl;
   cout << "Number of Shares: " << tsla.num_shares << endl;
   cout << "Total share price: $" << tsla.share_total << endl;
   cout << endl;
   
//WFC object & input
   Stock_Portfolio wfc;
   wfc.sector = financial_insurance;
   cout << "Enter stock name: ";
   cin >> wfc.name;
   cout << "Enter stock price: ";
   cin >> wfc.share_price;
   cout << "Enter number of shares: ";
   cin >> wfc.num_shares;
   wfc.share_total = wfc.num_shares * wfc.share_price;
   wfc.portfolio_total = wfc.share_total + tsla.portfolio_total;
   cout << endl;

//WFC output
   cout << wfc.name << wfc.sector << endl;
   cout << "Share Price: $" << wfc.share_price << endl;
   cout << "Number of Shares: " << wfc.num_shares << endl;
   cout << "Total share price: $" << wfc.share_total << endl;
   cout << endl;

//Walmrt object & input
   Stock_Portfolio walmrt;
   walmrt.sector = consumer_products;
   cout << "Enter stock name: ";
   cin >> walmrt.name;
   cout << "Enter stock price: ";
   cin >> walmrt.share_price;
   cout << "Enter number of shares: ";
   cin >> walmrt.num_shares;
   walmrt.share_total = walmrt.num_shares * walmrt.share_price;
   walmrt.portfolio_total = walmrt.share_total + wfc.portfolio_total;
   cout << endl;

//Walmrt output 
   cout << walmrt.name << walmrt.sector << endl;
   cout << "Share Price: $" << walmrt.share_price << endl;
   cout << "Number of Shares: " << walmrt.num_shares << endl;
   cout << "Total share price: $" << walmrt.share_total << endl;
   cout << endl;
   
   cout << "Total Portfolio Worth: $" << walmrt.portfolio_total << endl;
   
   return 0;
     
 }
 
/* Final Output

Running /home/ubuntu/workspace/lab16/lab16.cpp
Enter stock name: FordM
Enter stock price: 18.76
Enter number of shares: 87

FordMA
Share Price: $18.76
Number of Shares: 87
Total share price: $1632.12

Enter stock name: Albertsn
Enter stock price: 34.39
Enter number of shares: 543

AlbertsnC
Share Price: $34.39
Number of Shares: 543
Total share price: $18673.8

Enter stock name: AAPL
Enter stock price: 145.91
Enter number of shares: 5

AAPLT
Share Price: $145.91
Number of Shares: 5
Total share price: $729.55

Enter stock name: TSLA
Enter stock price: 375.64
Enter number of shares: 50

TSLA
Share Price: $375.64
Number of Shares: 50
Total share price: $18782

Enter stock name: WFC
Enter stock price: 53.02
Enter number of shares: 1368

WFCF
Share Price: $53.02
Number of Shares: 1368
Total share price: $72531.4

Enter stock name: Walmrt
Enter stock price: 203.45
Enter number of shares: 20

WalmrtC
Share Price: $203.45
Number of Shares: 20
Total share price: $4069

Total Portfolio Worth: $116418


Process exited with code: 0 */