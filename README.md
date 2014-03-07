Facebook Photo/Album Text format for Drupal

Demo: The module can be tested on [simplytest.me](http://simplytest.me/project/fbphoto/7.x-1.0-beta3).

### Install

* This module has no dependency and can enabled directly.
* Go to /admin/config/content/formats
  * Preferably (but not necessary) create a new Input Format.
  * Enable the "Facebook photo" filter on the desired text format.
  * Reorder the filters, make sure FBPhoto filter is processed before the "Convert URLs into links" filter.
  * If there is extra space between the photos, disable the "Convert line breaks into HTML (i.e. <br> and <p>)" filter.

### Usage

* The filter is now ready for use. Try with:
  * Album: `[fb:https://www.facebook.com/media/set/?set=a.380743478891.164254.8427738891&type=3]`
  * Photo: `[fb:https://www.facebook.com/8427738891/photos/a.380743478891.164254.8427738891/380744538891/]`
* The CSS may need to be tweaked to make the picture display nice on current Drupal theme.
* If the attach module is enabled, an alternate syntax can be used:
  * Album: `[attach_fbphoto|url=https://www.facebook.com/media/set/?set=a.380743478891.164254.8427738891&type=3]`
  * Photo: `[attach_fbphoto|url=https://www.facebook.com/8427738891/photos/a.380743478891.164254.8427738891/380744538891/]`

### Integration with other modules
* Colorbox (https://drupal.org/project/colorbox)
* Lightbox2 (https://drupal.org/project/lightbox2)
* Attach (https://drupal.org/project/attach)

### Credits

Andy Truong started development on the module. It is now co-maintained by Alan Lobo.

To contribute: Please make Pull Request on [Github](https://github.com/andytruong/fbphoto).
