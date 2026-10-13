package com.facebook.react;

import com.facebook.react.ReactInstanceManager;
import com.facebook.react.bridge.ReactApplicationContext;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4880d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactInstanceManager f4881e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4882i;

    public /* synthetic */ b(ReactInstanceManager reactInstanceManager, Object obj, int i5) {
        this.f4880d = i5;
        this.f4881e = reactInstanceManager;
        this.f4882i = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4880d) {
            case 0:
                this.f4881e.lambda$runCreateReactContextOnNewThread$2((ReactInstanceManager.ReactContextInitParams) this.f4882i);
                break;
            default:
                this.f4881e.lambda$runCreateReactContextOnNewThread$1((ReactApplicationContext) this.f4882i);
                break;
        }
    }
}
