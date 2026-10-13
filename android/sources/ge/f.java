package ge;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import fi.x;

/* loaded from: classes3.dex */
public final class f implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f9179d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f9180e;

    public f(Format format, int i5) {
        this.f9179d = (format.f5230v & 1) != 0;
        this.f9180e = DefaultTrackSelector.d(i5, false);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        f fVar = (f) obj;
        return x.a.c(this.f9180e, fVar.f9180e).c(this.f9179d, fVar.f9179d).e();
    }
}
