package com.facebook.react.devsupport;

import com.facebook.react.devsupport.CxxInspectorPackagerConnection;
import com.facebook.react.devsupport.interfaces.PackagerStatusCallback;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4893d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4894e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4895i;

    public /* synthetic */ c(int i5, Object obj, Object obj2) {
        this.f4893d = i5;
        this.f4895i = obj;
        this.f4894e = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4893d) {
            case 0:
                CxxInspectorPackagerConnection$DelegateImpl$connectWebSocket$webSocket$1.onFailure$lambda$0((Throwable) this.f4895i, (CxxInspectorPackagerConnection.WebSocketDelegate) this.f4894e);
                break;
            case 1:
                ((CxxInspectorPackagerConnection.WebSocketDelegate) this.f4894e).didReceiveMessage((String) this.f4895i);
                break;
            case 2:
                DevSupportManagerBase.reportBundleLoadingFailure$lambda$33((Exception) this.f4895i, (DevSupportManagerBase) this.f4894e);
                break;
            default:
                DevSupportManagerBase.isPackagerRunning$lambda$32((DevSupportManagerBase) this.f4895i, (PackagerStatusCallback) this.f4894e);
                break;
        }
    }

    public /* synthetic */ c(CxxInspectorPackagerConnection.WebSocketDelegate webSocketDelegate, String str) {
        this.f4893d = 1;
        this.f4894e = webSocketDelegate;
        this.f4895i = str;
    }
}
