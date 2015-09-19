# Bower Manager
Bower Manager allows Drupal contributed modules to depend on fronted libraries managed via [Bower](http://bower.io/).

[Bower](http://bower.io/) is a package management system for fronted libraries. It depends on Node.js and npm. It works with git and GitHub repositories. See the Bower [Getting started](http://bower.io/#getting-started) page for more information.

## What does Bower Manager do?
Bower Manager searches the root directory (`MODULE_NAME/bower.json`) of freshly installed Drupal modules for a bower.json file. If Bower Manager finds a bower.json file it extracts it’s dependencies and injects them in the bower.json file of the default theme.  
This module also provides a drush command (`drush bower-manager-update`) to search for bower.json files in all enabled modules and injects the found dependencies of those in the bower.json file of the default theme.

## What does Bower Manager not do?
- this module does **not** download anything
- it does **not** include .js or .css files in your theme

## How to use Bower Manager
After installing a new module that defines it’s own bower dependencies or after running `drush bower-manager-update` you have to install those new dependencies that are now added to the bower.json file in your default theme. To do so navigate to your default theme (e.g. `sites/all/themes/my-default-theme`) and run `bower install`. This creates a new folder named „bower_components“ in your theme directory with all dependencies in it. If you want bower to install the dependencies in a different folder (e.g. `sites/all/libraries`) you can create a `.bowerrc` file and define your desired directory there - read more about that in the [official documentation](http://bower.io/docs/config/). Add those dependencies to you theme as you usually would do with `drupal_add_css()`, `drupal_add_js()` or in the info file of your theme.

## About
### Author
Markus Oberlehner  
Twitter: https://twitter.com/MaOberlehner

### License
GPL v2 (http://www.gnu.org/licenses/gpl-2.0.html)
