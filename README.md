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

## Installation
- Grab the latest release of P3RFix from [here.](https://github.com/Lyall/P3RFix/releases)
- Extract the contents of the release zip in to the the game's binary folder.<br />(e.g. "**XboxGames\Persona 3 Reload\Content**" for Xbox/MS Store or "**steamapps\common\P3R**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **P3RFix.ini** to adjust settings for the fix.

## Known Issues
Please report any issues you see.
This list will contain bugs which may or may not be fixed.

- Switching between borderless and fullscreen/windowed may display the incorrect resolution until switched back again.
- Some screen fades/transitions may not span the screen.

## Screenshots

| ![ezgif-5-7e73acc575](https://github.com/Lyall/P3RFix/assets/695941/56b5088b-1272-4621-9d71-e1bda21337d5) |
|:--:|
| Gameplay |

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.
