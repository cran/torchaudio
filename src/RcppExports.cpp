// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_info_mp3
Rcpp::List get_info_mp3(std::string filepath);
RcppExport SEXP _torchaudio_get_info_mp3(SEXP filepathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filepath(filepathSEXP);
    rcpp_result_gen = Rcpp::wrap(get_info_mp3(filepath));
    return rcpp_result_gen;
END_RCPP
}
// audiofile_read_wav_cpp
Rcpp::List audiofile_read_wav_cpp(std::string filepath, int from, int to, std::string unit);
RcppExport SEXP _torchaudio_audiofile_read_wav_cpp(SEXP filepathSEXP, SEXP fromSEXP, SEXP toSEXP, SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filepath(filepathSEXP);
    Rcpp::traits::input_parameter< int >::type from(fromSEXP);
    Rcpp::traits::input_parameter< int >::type to(toSEXP);
    Rcpp::traits::input_parameter< std::string >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(audiofile_read_wav_cpp(filepath, from, to, unit));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torchaudio_get_info_mp3", (DL_FUNC) &_torchaudio_get_info_mp3, 1},
    {"_torchaudio_audiofile_read_wav_cpp", (DL_FUNC) &_torchaudio_audiofile_read_wav_cpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_torchaudio(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
