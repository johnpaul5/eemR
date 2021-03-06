
<!-- README.md is generated from README.Rmd. Please edit that file -->
eemR [![Travis-CI Build Status](https://api.travis-ci.org/PMassicotte/eemR.svg?branch=master)](https://travis-ci.org/PMassicotte/eemR) [![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/PMassicotte/eemR?branch=master&svg=true)](https://ci.appveyor.com/project/PMassicotte/eemR) [![Package-License](https://img.shields.io/badge/license-GPL%20%28%3E=%202%29-brightgreen.svg?style=flat)](http://www.gnu.org/licenses/gpl-2.0.html) [![CRAN\_Status\_Badge](http://www.r-pkg.org/badges/version/eemR)](https://cran.r-project.org/package=eemR) [![Downloads](http://cranlogs.r-pkg.org/badges/eemR?color=brightgreen)](http://www.r-pkg.org/pkg/eemR) [![DOI](https://zenodo.org/badge/doi/10.5281/zenodo.61080.svg)](http://dx.doi.org/10.5281/zenodo.61080)
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

The **eemR** package implements various functions used calculate metrics from excitation-emission matrix (EEM) as well as to preform pre-processing corrections before PARAFAC analysis.

The lastest release of the package from CRAN can be installed with:

``` r
install.packages("eemR")
```

The lastest development version of the package can be installed with:

``` r
devtools::install_github("PMassicotte/eemR")
```

Vignette
--------

A detailed vignette presenting the package which can be viewed using:

``` r
vignette(topic = "introduction", package = "eemR")
```

Supported spectrophotometers
----------------------------

At the moment, the following EEM types are supported:

-   Cary Eclipse `.csv` files

-   Aqualog `.dat` files

-   Shimadzu `.TXT` files

EEM can be read using the `eem_read()` function. *Please fill an [issue](https://github.com/PMassicotte/eemR/issues) if you have other file formats you would like to add to the package*.

At the moment I need files from:

-   FluoromaxIII

-   Perkin elmer

-   Hitachi
