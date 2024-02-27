# Persona 3 Reload Fix
[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)</br>
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/P3RFix/total.svg)](https://github.com/Lyall/P3RFix/releases)

This is a fix that adds custom resolutions, ultrawide support and more to Persona 3 Reload.<br />

## Features
- Custom resolution support.
- Ultrawide/narrow aspect ratio support.
- Correct FOV at any aspect ratio.
- Configurable intro skip.
- Render scale override.
- Control over pausing when alt+tabbed.
- The ability to increase/decrease resolution of render texture targets (i.e menus, persona model previews).

## Installation
- Grab the latest release of P3RFix from [here.](https://github.com/Lyall/P3RFix/releases)
- Extract the contents of the release zip in to the the game's binary folder.<br />(e.g. "**XboxGames\Persona 3 Reload\Content**" for Xbox/MS Store or "**steamapps\common\P3R**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

<details>
<summary>If you want to use Reloaded II mods alongside P3RFix</summary>
  
*This applies to both Windows and Steam Deck/Linux*

Note: Reloaded II **might not work** if you use the **Game Pass/MS Store version of P3R** (see [this page](https://gamebanana.com/tuts/17165) if you want help with that) so it's recommended to only follow these steps if you are using the Steam version. 

Before starting, make sure to **delete any P3RFix files** inside of the game's files **if you have already have used this fix** previously (*P3RFix.ini*, *P3RFix.asi*, *dsound.ini* and *dsound.dll*)

To make sure P3RFix loads alongside any Reloaded II mods you are using, follow these steps:

- Set up Reloaded II and enable any mods you want as per the instructions on [GameBanana](https://gamebanana.com/tuts/17156).
- In Reloaded II go to *Edit Application*, *Advanced Tools & Options*, *Deploy ASI Loader*.
![asiloader_reloaded](https://github.com/Lyall/P3RFix/assets/695941/79ad9641-ee10-48b0-a04f-ecc72908ad83)
- Once this is done, open the game's binary folder (e.g. "**steamapps\common\P3R\P3R\Binaries\Win64**" for Steam).
- You should see a *scripts* folder which Reloaded II created when deploying the ASI Loader.
- Move *P3RFix.asi* into this folder.
- You should now be able to start the game and see both P3RFix and Reloaded II mods working.

</details>

## Configuration
- See **P3RFix.ini** to adjust settings for the fix.

## Known Issues
Please report any issues you see.
This list will contain bugs which may or may not be fixed.

- Some screen fades/transitions may not span the screen at non-16:9 resolutions.
- If you skip intro to the load save menu, then back out, you will softlock the game.

## Screenshots

| ![ezgif-5-7e73acc575](https://github.com/Lyall/P3RFix/assets/695941/56b5088b-1272-4621-9d71-e1bda21337d5) |
|:--:|
| Gameplay |

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.
