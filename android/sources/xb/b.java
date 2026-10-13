package xb;

import android.content.Context;

/* loaded from: classes3.dex */
public final class b extends c {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final fc.a f20296b;

    /* renamed from: c, reason: collision with root package name */
    public final fc.a f20297c;

    /* renamed from: d, reason: collision with root package name */
    public final String f20298d;

    public b(Context context, fc.a aVar, fc.a aVar2, String str) {
        if (context == null) {
            throw new NullPointerException("Null applicationContext");
        }
        this.a = context;
        if (aVar == null) {
            throw new NullPointerException("Null wallClock");
        }
        this.f20296b = aVar;
        if (aVar2 == null) {
            throw new NullPointerException("Null monotonicClock");
        }
        this.f20297c = aVar2;
        if (str == null) {
            throw new NullPointerException("Null backendName");
        }
        this.f20298d = str;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof c) {
            b bVar = (b) ((c) obj);
            if (this.a.equals(bVar.a) && this.f20296b.equals(bVar.f20296b) && this.f20297c.equals(bVar.f20297c) && this.f20298d.equals(bVar.f20298d)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((((((this.a.hashCode() ^ 1000003) * 1000003) ^ this.f20296b.hashCode()) * 1000003) ^ this.f20297c.hashCode()) * 1000003) ^ this.f20298d.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("CreationContext{applicationContext=");
        sb2.append(this.a);
        sb2.append(", wallClock=");
        sb2.append(this.f20296b);
        sb2.append(", monotonicClock=");
        sb2.append(this.f20297c);
        sb2.append(", backendName=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f20298d, "}");
    }
}
