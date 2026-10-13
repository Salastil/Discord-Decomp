package io.sentry.android.ndk;

import io.sentry.ndk.NativeScope;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11372d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f11373e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f11374i;

    public /* synthetic */ c(d dVar, String str, int i5) {
        this.f11372d = i5;
        this.f11373e = dVar;
        this.f11374i = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11372d) {
            case 0:
                this.f11373e.f11375b.getClass();
                NativeScope.nativeRemoveTag(this.f11374i);
                break;
            default:
                this.f11373e.f11375b.getClass();
                NativeScope.nativeRemoveExtra(this.f11374i);
                break;
        }
    }
}
