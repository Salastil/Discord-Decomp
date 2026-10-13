package jm;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;

/* loaded from: classes3.dex */
public final class z {
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final double f12975b;

    /* renamed from: c, reason: collision with root package name */
    public final double f12976c;

    /* renamed from: d, reason: collision with root package name */
    public final double f12977d;

    /* renamed from: e, reason: collision with root package name */
    public final double f12978e;

    public /* synthetic */ z() {
        this(0.0d, 0.0d, 0.0d, 0.0d, -1.0d);
    }

    public final WritableMap a() {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("tiltX", this.a);
        createMap.putDouble("tiltY", this.f12975b);
        createMap.putDouble("altitudeAngle", this.f12976c);
        createMap.putDouble("azimuthAngle", this.f12977d);
        createMap.putDouble("pressure", this.f12978e);
        return createMap;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof z)) {
            return false;
        }
        z zVar = (z) obj;
        return Double.compare(this.a, zVar.a) == 0 && Double.compare(this.f12975b, zVar.f12975b) == 0 && Double.compare(this.f12976c, zVar.f12976c) == 0 && Double.compare(this.f12977d, zVar.f12977d) == 0 && Double.compare(this.f12978e, zVar.f12978e) == 0;
    }

    public final int hashCode() {
        return Double.hashCode(this.f12978e) + com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(Double.hashCode(this.a) * 31, this.f12975b, 31), this.f12976c, 31), this.f12977d, 31);
    }

    public final String toString() {
        return "StylusData(tiltX=" + this.a + ", tiltY=" + this.f12975b + ", altitudeAngle=" + this.f12976c + ", azimuthAngle=" + this.f12977d + ", pressure=" + this.f12978e + ")";
    }

    public z(double d6, double d7, double d8, double d10, double d11) {
        this.a = d6;
        this.f12975b = d7;
        this.f12976c = d8;
        this.f12977d = d10;
        this.f12978e = d11;
    }
}
