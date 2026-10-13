package ge;

import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo;
import hc.o1;
import ke.d0;

/* loaded from: classes3.dex */
public final class u {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final o1[] f9230b;

    /* renamed from: c, reason: collision with root package name */
    public final p[] f9231c;

    /* renamed from: d, reason: collision with root package name */
    public final Tracks f9232d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f9233e;

    public u(o1[] o1VarArr, p[] pVarArr, Tracks tracks, MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo) {
        this.f9230b = o1VarArr;
        this.f9231c = (p[]) pVarArr.clone();
        this.f9232d = tracks;
        this.f9233e = mappingTrackSelector$MappedTrackInfo;
        this.a = o1VarArr.length;
    }

    public final boolean a(u uVar, int i5) {
        return uVar != null && d0.a(this.f9230b[i5], uVar.f9230b[i5]) && d0.a(this.f9231c[i5], uVar.f9231c[i5]);
    }

    public final boolean b(int i5) {
        return this.f9230b[i5] != null;
    }
}
