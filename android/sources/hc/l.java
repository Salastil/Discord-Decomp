package hc;

import com.google.android.exoplayer2.DeviceInfo;

/* loaded from: classes3.dex */
public final class l {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f9773b;

    /* renamed from: c, reason: collision with root package name */
    public int f9774c;

    public /* synthetic */ l(int i5, int i6, int i10) {
        this.a = i5;
        this.f9773b = i6;
        this.f9774c = i10;
    }

    public DeviceInfo a() {
        ke.b.g(this.f9773b <= this.f9774c);
        return new DeviceInfo(this);
    }

    public l(int i5) {
        this.a = i5;
    }
}
