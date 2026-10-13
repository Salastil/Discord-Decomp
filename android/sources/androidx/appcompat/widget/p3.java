package androidx.appcompat.widget;

import android.window.OnBackInvokedCallback;

/* loaded from: classes.dex */
public final /* synthetic */ class p3 implements OnBackInvokedCallback {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f1079b;

    public /* synthetic */ p3(int i5, Object obj) {
        this.a = i5;
        this.f1079b = obj;
    }

    public final void onBackInvoked() {
        switch (this.a) {
            case 0:
                ((Runnable) this.f1079b).run();
                break;
            case 1:
                ((e.p) this.f1079b).invoke();
                break;
            case 2:
                ((eh.b) this.f1079b).c();
                break;
            default:
                ((androidx.appcompat.app.a) this.f1079b).V();
                break;
        }
    }
}
