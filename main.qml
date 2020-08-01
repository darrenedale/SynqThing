import QtQuick 2.2
import QtQuick.Controls 1.1
import QtWebView 1.1

ApplicationWindow {
    visible: true
    x: initialX
    y: initialY
    width: initialWidth
    height: initialHeight
    title: webView.title

    WebView {
        id: webView
        anchors.fill: parent
        // TODO fetch URL from settings
        url: syncThingUrl
        onLoadingChanged: {
            if (loadRequest.errorString) {
                console.error(loadRequest.errorString);
            }
        }
    }
}