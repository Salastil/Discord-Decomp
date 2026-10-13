package jc;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class l {

    /* renamed from: e, reason: collision with root package name */
    public static final l f12572e = new l(-1, -1, -1);
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12573b;

    /* renamed from: c, reason: collision with root package name */
    public final int f12574c;

    /* renamed from: d, reason: collision with root package name */
    public final int f12575d;

    public l(int i5, int i6, int i10) {
        this.a = i5;
        this.f12573b = i6;
        this.f12574c = i10;
        this.f12575d = ke.d0.F(i10) ? ke.d0.x(i10, i6) : -1;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof l)) {
            return false;
        }
        l lVar = (l) obj;
        return this.a == lVar.a && this.f12573b == lVar.f12573b && this.f12574c == lVar.f12574c;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.a), Integer.valueOf(this.f12573b), Integer.valueOf(this.f12574c)});
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("AudioFormat[sampleRate=");
        sb2.append(this.a);
        sb2.append(", channelCount=");
        sb2.append(this.f12573b);
        sb2.append(", encoding=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f12574c, ']');
    }
}
