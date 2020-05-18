# AK-030

- AK-030 は ESP32 をメイン CPU とする LTE-M 対応の IoT デバイスです。
- 村田製 LTE-M モジュールを搭載し、ESP32 の WiFi、Bluetooth に加えて、LTE-M による省電力なセルラー通信が可能となっています。

# 特徴

- Arduino 環境でプログラミングが可能。
- 標準的な ESP32 のハードウェア構成となっており、既存の ESP32 用ライブラリをそのまま流用可能。
- 4 ピンの外部接続端子を有し、I2C や GPIO インターフェースによるさまざまなセンサーデバイスを接続可能。
- USB ドングル型のコンパクトな形状。
- 電源は USB Type-A 端子から供給。

# I/O マップ

| IO No | 説明                   |
| ----- | ---------------------- |
| IO27  | Status LED(青) ※負論理 |
| IO32  | LTE LED(緑) ※負論理    |
| IO22  | I2C SCL                |
| IO21  | I2C SDA                |
| SD0   | ESP32 UART2※ RTS       |
| SD1   | SP32 UART2※ CTS        |
| IO16  | ESP32 UART2※ RX        |
| IO17  | ESP32 UART2※ TX        |

※ LTE-M モジュールとの通信用シリアルポート。Arduino からは Serial2 として認識。

# プログラミング環境のセットアップ

1. Arduino IDE をインストール
1. Arduino core for the ESP32 をインストール
1. CP210x ドライバをインストール

# Arduino IDE の設定

1. "Tools"メニューの"Board"から"ESP32 Dev Module"を選択
1. "Tools"メニューの"Port"から"/dev/cu.SLAB_USBtoUART(Arduino Tian)"を選択(Mac の場合)

# Arduino ライブラリのインストール

1. GitHub リポジトリ( https://github.com/ABIT-crop/AK-030 )をブラウザで開き、「Clone or Download」ボタンをクリック。さらに「Donwload ZIP」をクリックして、AK-030-master.zip をローカル PC にダウンロードする。
1. Arduino IDE の"Sketch"-"Include Library"から"Add .ZIP Library"を選択して、ダウンロードした AK-030-master.zip を指定。
1. 以後、"File"-"Examples"-"AK-030"からサンプルプログラムを開けるようになる。
