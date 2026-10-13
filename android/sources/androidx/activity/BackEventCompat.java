package androidx.activity;

import android.window.BackEvent;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class BackEventCompat {
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f730b;

    /* renamed from: c, reason: collision with root package name */
    public final float f731c;

    /* renamed from: d, reason: collision with root package name */
    public final int f732d;

    public BackEventCompat(BackEvent backEvent) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        float o6 = a2.a.o(backEvent);
        float p3 = a2.a.p(backEvent);
        float l6 = a2.a.l(backEvent);
        int n6 = a2.a.n(backEvent);
        this.a = o6;
        this.f730b = p3;
        this.f731c = l6;
        this.f732d = n6;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("BackEventCompat{touchX=");
        sb2.append(this.a);
        sb2.append(", touchY=");
        sb2.append(this.f730b);
        sb2.append(", progress=");
        sb2.append(this.f731c);
        sb2.append(", swipeEdge=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f732d, '}');
    }
}
