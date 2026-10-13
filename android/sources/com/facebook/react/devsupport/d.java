package com.facebook.react.devsupport;

import com.facebook.react.devsupport.CxxInspectorPackagerConnection;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4896d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ CxxInspectorPackagerConnection.WebSocketDelegate f4897e;

    public /* synthetic */ d(CxxInspectorPackagerConnection.WebSocketDelegate webSocketDelegate, int i5) {
        this.f4896d = i5;
        this.f4897e = webSocketDelegate;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4896d) {
            case 0:
                CxxInspectorPackagerConnection$DelegateImpl$connectWebSocket$webSocket$1.onClosed$lambda$3(this.f4897e);
                break;
            default:
                this.f4897e.didOpen();
                break;
        }
    }
}
