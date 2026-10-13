package jc;

import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class s extends Exception {

    /* renamed from: d, reason: collision with root package name */
    public final int f12638d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f12639e;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public s(int i5, int i6, int i10, int i11, Format format, boolean z5, RuntimeException runtimeException) {
        super(r5.toString(), runtimeException);
        StringBuilder q5 = a3.e.q(i5, "AudioTrack init failed ", i6, " Config(", ", ");
        a3.e.y(q5, i10, ", ", i11, ") ");
        q5.append(format);
        q5.append(z5 ? " (recoverable)" : "");
        this.f12638d = i5;
        this.f12639e = z5;
    }
}
