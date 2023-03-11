# esp_GPS
esp32 devkit + GPS + TinyGPS++

eps32 devkitでみちびき対応のGPSを取得してコンソールに出力する
取得したデータをpythonで活用するために1行で出力している
使用にあたり、事前にTinyGPS++のライブラリをArduinoIDEで使えるようにしておく

内蔵のUART2を使用して通信に使用するピンを定義している。
UART2を使用した際のピンのTX、RXは
|RX|TX|
|GPIO16|GPIO17|

esp32側のRXをGPSのTXと接続、TXをRXとそれぞれ接続する。

※UARTの通信にはTX ，RXという2つのポートを使用します． TXは送信（Transmitter），RXは受信（Receiver）のことを意味します． UARTの場合には，自分側のTXと相手側のRX，自分側のRXと相手側のTXをそれぞれ接続します． 送信（TX）と受信（RX）が対になります．
