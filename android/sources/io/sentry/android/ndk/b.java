package io.sentry.android.ndk;

import io.sentry.ndk.NativeScope;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11368d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f11369e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f11370i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ String f11371v;

    public /* synthetic */ b(d dVar, String str, String str2, int i5) {
        this.f11368d = i5;
        this.f11369e = dVar;
        this.f11370i = str;
        this.f11371v = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f11368d) {
            case 0:
                this.f11369e.f11375b.getClass();
                NativeScope.nativeSetExtra(this.f11370i, this.f11371v);
                break;
            default:
                this.f11369e.f11375b.getClass();
                NativeScope.nativeSetTag(this.f11370i, this.f11371v);
                break;
        }
    }
}
