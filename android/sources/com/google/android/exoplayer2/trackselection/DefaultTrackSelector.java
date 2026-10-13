package com.google.android.exoplayer2.trackselection;

import android.content.Context;
import android.text.TextUtils;
import android.util.Pair;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.audio.AudioAttributes;
import com.google.android.exoplayer2.e;
import fi.e0;
import fi.q0;
import fi.r0;
import fi.u;
import ge.g;
import ge.j;
import ge.l;
import ge.m;
import ge.o;
import ge.r;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.RandomAccess;
import ke.b;
import ke.d0;
import nd.a1;
import nd.z0;
import qa.s;

/* loaded from: classes3.dex */
public final class DefaultTrackSelector extends r {
    public static final q0 k = new u(new com.facebook.react.uimanager.a(6));

    /* renamed from: l, reason: collision with root package name */
    public static final q0 f5456l = new u(new com.facebook.react.uimanager.a(7));

    /* renamed from: d, reason: collision with root package name */
    public final Object f5457d;

    /* renamed from: e, reason: collision with root package name */
    public final Context f5458e;

    /* renamed from: f, reason: collision with root package name */
    public final s f5459f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f5460g;

    /* renamed from: h, reason: collision with root package name */
    public a f5461h;

    /* renamed from: i, reason: collision with root package name */
    public final j f5462i;
    public AudioAttributes j;

    public DefaultTrackSelector(TrackSelectionParameters trackSelectionParameters, s sVar, Context context) {
        this.f5457d = new Object();
        this.f5458e = context != null ? context.getApplicationContext() : null;
        this.f5459f = sVar;
        if (trackSelectionParameters instanceof a) {
            this.f5461h = (a) trackSelectionParameters;
        } else {
            a aVar = context != null ? new a(new g(context)) : a.f5475n0;
            aVar.getClass();
            g gVar = new g(aVar);
            gVar.a(trackSelectionParameters);
            this.f5461h = new a(gVar);
        }
        this.j = AudioAttributes.f5336y;
        boolean z5 = context != null && d0.H(context);
        this.f5460g = z5;
        if (!z5 && context != null && d0.a >= 32) {
            this.f5462i = j.f(context);
        }
        if (this.f5461h.f5482g0 && context == null) {
            b.N("DefaultTrackSelector", "Audio channel count constraints cannot be applied without reference to Context. Build the track selector instance with one of the non-deprecated constructors that take a Context argument.");
        }
    }

    public static void a(a1 a1Var, a aVar, HashMap hashMap) {
        for (int i5 = 0; i5 < a1Var.f15065d; i5++) {
            ge.s sVar = (ge.s) aVar.V.get(a1Var.a(i5));
            if (sVar != null) {
                z0 z0Var = sVar.f9205d;
                ge.s sVar2 = (ge.s) hashMap.get(Integer.valueOf(z0Var.f15210i));
                if (sVar2 == null || (sVar2.f9206e.isEmpty() && !sVar.f9206e.isEmpty())) {
                    hashMap.put(Integer.valueOf(z0Var.f15210i), sVar);
                }
            }
        }
    }

    public static int b(Format format, String str, boolean z5) {
        if (!TextUtils.isEmpty(str) && str.equals(format.f5229i)) {
            return 4;
        }
        String f2 = f(str);
        String f10 = f(format.f5229i);
        if (f10 == null || f2 == null) {
            return (z5 && f10 == null) ? 1 : 0;
        }
        if (f10.startsWith(f2) || f2.startsWith(f10)) {
            return 3;
        }
        int i5 = d0.a;
        return f10.split("-", 2)[0].equals(f2.split("-", 2)[0]) ? 2 : 0;
    }

    public static boolean d(int i5, boolean z5) {
        int i6 = i5 & 7;
        if (i6 != 4) {
            return z5 && i6 == 3;
        }
        return true;
    }

    public static String f(String str) {
        if (TextUtils.isEmpty(str) || TextUtils.equals(str, "und")) {
            return null;
        }
        return str;
    }

    public static Pair g(int i5, MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo, int[][][] iArr, l lVar, Comparator comparator) {
        int i6;
        RandomAccess randomAccess;
        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo2 = mappingTrackSelector$MappedTrackInfo;
        ArrayList arrayList = new ArrayList();
        int i10 = mappingTrackSelector$MappedTrackInfo2.a;
        int i11 = 0;
        while (i11 < i10) {
            if (i5 == mappingTrackSelector$MappedTrackInfo2.f5463b[i11]) {
                a1 a1Var = mappingTrackSelector$MappedTrackInfo2.f5464c[i11];
                for (int i12 = 0; i12 < a1Var.f15065d; i12++) {
                    z0 a = a1Var.a(i12);
                    r0 a10 = lVar.a(i11, a, iArr[i11][i12]);
                    int i13 = a.f15208d;
                    boolean[] zArr = new boolean[i13];
                    int i14 = 0;
                    while (i14 < i13) {
                        m mVar = (m) a10.get(i14);
                        int a11 = mVar.a();
                        if (zArr[i14] || a11 == 0) {
                            i6 = i10;
                        } else {
                            if (a11 == 1) {
                                randomAccess = e0.s(mVar);
                            } else {
                                ArrayList arrayList2 = new ArrayList();
                                arrayList2.add(mVar);
                                int i15 = i14 + 1;
                                while (i15 < i13) {
                                    m mVar2 = (m) a10.get(i15);
                                    int i16 = i10;
                                    if (mVar2.a() == 2 && mVar.b(mVar2)) {
                                        arrayList2.add(mVar2);
                                        zArr[i15] = true;
                                    }
                                    i15++;
                                    i10 = i16;
                                }
                                randomAccess = arrayList2;
                            }
                            i6 = i10;
                            arrayList.add(randomAccess);
                        }
                        i14++;
                        i10 = i6;
                    }
                }
            }
            i11++;
            mappingTrackSelector$MappedTrackInfo2 = mappingTrackSelector$MappedTrackInfo;
            i10 = i10;
        }
        if (arrayList.isEmpty()) {
            return null;
        }
        List list = (List) Collections.max(arrayList, comparator);
        int[] iArr2 = new int[list.size()];
        for (int i17 = 0; i17 < list.size(); i17++) {
            iArr2[i17] = ((m) list.get(i17)).f9195i;
        }
        m mVar3 = (m) list.get(0);
        return Pair.create(new o(0, mVar3.f9194e, iArr2), Integer.valueOf(mVar3.f9193d));
    }

    public final a c() {
        a aVar;
        synchronized (this.f5457d) {
            aVar = this.f5461h;
        }
        return aVar;
    }

    public final void e() {
        boolean z5;
        e eVar;
        j jVar;
        synchronized (this.f5457d) {
            try {
                z5 = this.f5461h.f5482g0 && !this.f5460g && d0.a >= 32 && (jVar = this.f5462i) != null && jVar.f9187b;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (!z5 || (eVar = this.a) == null) {
            return;
        }
        eVar.E.d(10);
    }

    public final void h(TrackSelectionParameters trackSelectionParameters) {
        if (trackSelectionParameters instanceof a) {
            i((a) trackSelectionParameters);
        }
        g gVar = new g(c());
        gVar.a(trackSelectionParameters);
        i(new a(gVar));
    }

    public final void i(a aVar) {
        boolean equals;
        aVar.getClass();
        synchronized (this.f5457d) {
            equals = this.f5461h.equals(aVar);
            this.f5461h = aVar;
        }
        if (equals) {
            return;
        }
        if (aVar.f5482g0 && this.f5458e == null) {
            b.N("DefaultTrackSelector", "Audio channel count constraints cannot be applied without reference to Context. Build the track selector instance with one of the non-deprecated constructors that take a Context argument.");
        }
        e eVar = this.a;
        if (eVar != null) {
            eVar.E.d(10);
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public DefaultTrackSelector(Context context) {
        this(new a(new g(context)), r0, context);
        s sVar = new s();
        a aVar = a.f5475n0;
    }
}
