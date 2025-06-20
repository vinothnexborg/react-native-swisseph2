#pragma once

#include <jsi/jsi.h>
#include <react/nativemodule/core/ReactCommon/TurboModule.h>
#include <string>
#include <vector>

namespace facebook::react {

class JSI_EXPORT RNSwissephSpec : public TurboModule {
public:
  using TurboModule::TurboModule;

  virtual double sweJulday(double year, double month, double day, double hour, double gregflag) = 0;
  virtual double sweDeltat(double tjd) = 0;
  virtual jsi::Object sweRevjul(jsi::Runtime &rt, double julday, double gregflag) = 0;
  virtual jsi::Object sweUtcTimeZone(jsi::Runtime &rt, double iyear, double imonth, double iday, double ihour, double imin, double isec, double timezone) = 0;
  virtual jsi::Object sweUtcToJd(jsi::Runtime &rt, double year, double month, double day, double hour, double min, double sec, double gregflag) = 0;
  virtual jsi::Object sweJdetToUtc(jsi::Runtime &rt, double tjdEt, double gregflag) = 0;
  virtual jsi::Object sweJdut1ToUtc(jsi::Runtime &rt, double tjdUt, double gregflag) = 0;
  virtual void sweSetTopo(double geolon, double geolat, double altitude) = 0;
  virtual std::string sweGetPlanetName(double ipl) = 0;
  virtual jsi::Object sweCalcUt(jsi::Runtime &rt, double tjdUt, double ipl, double iflag) = 0;
  virtual jsi::Object sweCotrans(jsi::Runtime &rt, double longitude, double latitude, double distance, double eps) = 0;
  virtual jsi::Object sweCalc(jsi::Runtime &rt, double tjd, double ipl, double iflag) = 0;
  virtual jsi::Object sweHouses(jsi::Runtime &rt, double tjdUt, double iflag, double geolat, double geolon, std::string hsys) = 0;
  virtual jsi::Object sweHousesArmc(jsi::Runtime &rt, double armc, double geolat, double eps, std::string hsys) = 0;
  virtual jsi::Object sweHousePos(jsi::Runtime &rt, double armc, double geolat, double eps, std::string hsys) = 0;
  virtual void sweSetSidMode(double sidMode, double t0, double ayanT0) = 0;
  virtual double sweGetAyanamsaUt(double tjdUt) = 0;
  virtual double sweSidtime(double tjdUt) = 0;
  virtual double sweGetAyanamsa(double tjdEt) = 0;
  virtual jsi::Object sweFixstar(jsi::Runtime &rt, std::string star, double tjd, double iflag) = 0;
  virtual jsi::Object sweFixstarUt(jsi::Runtime &rt, std::string star, double tjdUt, double iflag) = 0;
  virtual jsi::Object sweHeliacalPhenoUt(jsi::Runtime &rt, double tjdUt, std::vector<double> dgeo, std::vector<double> datm, std::vector<double> dobs, std::string objectName, double eventType, double helflag) = 0;
  virtual jsi::Object sweHeliacalUt(jsi::Runtime &rt, double tjdUt, std::vector<double> dgeo, std::vector<double> datm, std::vector<double> dobs, std::string objectName, double eventType, double helflag) = 0;
  virtual jsi::Object sweVisLimitMag(jsi::Runtime &rt, double tjdUt, std::vector<double> dgeo, std::vector<double> datm, std::vector<double> dobs, std::string objectName, double helflag) = 0;
  virtual jsi::Object sweNodApsUt(jsi::Runtime &rt, double tjdUt, double ipl, double iflag, double method) = 0;
  virtual std::string getHarmonyResfilePath() = 0;
};

} // namespace facebook::react
