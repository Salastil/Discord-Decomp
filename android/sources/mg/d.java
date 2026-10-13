package mg;

import android.animation.TimeInterpolator;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;

/* loaded from: classes3.dex */
public final class d {
    public long a;

    /* renamed from: b, reason: collision with root package name */
    public long f14498b;

    /* renamed from: c, reason: collision with root package name */
    public TimeInterpolator f14499c;

    /* renamed from: d, reason: collision with root package name */
    public int f14500d;

    /* renamed from: e, reason: collision with root package name */
    public int f14501e;

    public final TimeInterpolator a() {
        TimeInterpolator timeInterpolator = this.f14499c;
        return timeInterpolator != null ? timeInterpolator : a.f14493b;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        if (this.a == dVar.a && this.f14498b == dVar.f14498b && this.f14500d == dVar.f14500d && this.f14501e == dVar.f14501e) {
            return a().getClass().equals(dVar.a().getClass());
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        long j5 = this.f14498b;
        return ((((a().getClass().hashCode() + (((((int) (j ^ (j >>> 32))) * 31) + ((int) ((j5 >>> 32) ^ j5))) * 31)) * 31) + this.f14500d) * 31) + this.f14501e;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        sb2.append(d.class.getName());
        sb2.append('{');
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append(" delay: ");
        sb2.append(this.a);
        sb2.append(" duration: ");
        sb2.append(this.f14498b);
        sb2.append(" interpolator: ");
        sb2.append(a().getClass());
        sb2.append(" repeatCount: ");
        sb2.append(this.f14500d);
        sb2.append(" repeatMode: ");
        return k0.d.m(sb2, this.f14501e, "}\n");
    }
}
