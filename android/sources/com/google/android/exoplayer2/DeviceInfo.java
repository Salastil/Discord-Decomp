package com.google.android.exoplayer2;

import hc.l;
import ke.d0;

/* loaded from: classes3.dex */
public final class DeviceInfo implements hc.g {

    /* renamed from: d, reason: collision with root package name */
    public final int f5199d;

    /* renamed from: e, reason: collision with root package name */
    public final int f5200e;

    /* renamed from: i, reason: collision with root package name */
    public final int f5201i;

    /* renamed from: v, reason: collision with root package name */
    public final String f5202v = null;

    static {
        new l(0).a();
        int i5 = d0.a;
        Integer.toString(0, 36);
        Integer.toString(1, 36);
        Integer.toString(2, 36);
        Integer.toString(3, 36);
    }

    public DeviceInfo(l lVar) {
        this.f5199d = lVar.a;
        this.f5200e = lVar.f9773b;
        this.f5201i = lVar.f9774c;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof DeviceInfo)) {
            return false;
        }
        DeviceInfo deviceInfo = (DeviceInfo) obj;
        return this.f5199d == deviceInfo.f5199d && this.f5200e == deviceInfo.f5200e && this.f5201i == deviceInfo.f5201i && d0.a(this.f5202v, deviceInfo.f5202v);
    }

    public final int hashCode() {
        int i5 = (((((527 + this.f5199d) * 31) + this.f5200e) * 31) + this.f5201i) * 31;
        String str = this.f5202v;
        return i5 + (str == null ? 0 : str.hashCode());
    }
}
