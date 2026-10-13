package com.google.android.exoplayer2.trackselection;

import android.util.SparseArray;
import android.util.SparseBooleanArray;
import com.reactnativecommunity.webview.RNCWebViewManager;
import ge.g;
import java.util.Map;
import ke.d0;
import nd.a1;

/* loaded from: classes3.dex */
public final class a extends TrackSelectionParameters {

    /* renamed from: n0, reason: collision with root package name */
    public static final a f5475n0;

    /* renamed from: o0, reason: collision with root package name */
    public static final a f5476o0;
    public final boolean X;
    public final boolean Y;
    public final boolean Z;
    public final boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public final boolean f5477b0;

    /* renamed from: c0, reason: collision with root package name */
    public final boolean f5478c0;

    /* renamed from: d0, reason: collision with root package name */
    public final boolean f5479d0;

    /* renamed from: e0, reason: collision with root package name */
    public final boolean f5480e0;

    /* renamed from: f0, reason: collision with root package name */
    public final boolean f5481f0;

    /* renamed from: g0, reason: collision with root package name */
    public final boolean f5482g0;
    public final boolean h0;

    /* renamed from: i0, reason: collision with root package name */
    public final boolean f5483i0;

    /* renamed from: j0, reason: collision with root package name */
    public final boolean f5484j0;

    /* renamed from: k0, reason: collision with root package name */
    public final boolean f5485k0;

    /* renamed from: l0, reason: collision with root package name */
    public final SparseArray f5486l0;

    /* renamed from: m0, reason: collision with root package name */
    public final SparseBooleanArray f5487m0;

    static {
        a aVar = new a(new g());
        f5475n0 = aVar;
        f5476o0 = aVar;
        int i5 = d0.a;
        Integer.toString(1000, 36);
        Integer.toString(RNCWebViewManager.COMMAND_CLEAR_CACHE, 36);
        Integer.toString(RNCWebViewManager.COMMAND_CLEAR_HISTORY, 36);
        Integer.toString(1003, 36);
        Integer.toString(1004, 36);
        Integer.toString(1005, 36);
        Integer.toString(1006, 36);
        Integer.toString(1007, 36);
        Integer.toString(1008, 36);
        Integer.toString(1009, 36);
        Integer.toString(1010, 36);
        Integer.toString(1011, 36);
        Integer.toString(1012, 36);
        Integer.toString(1013, 36);
        Integer.toString(1014, 36);
        Integer.toString(1015, 36);
        Integer.toString(1016, 36);
        Integer.toString(1017, 36);
    }

    public a(g gVar) {
        super(gVar);
        this.X = gVar.A;
        this.Y = gVar.B;
        this.Z = gVar.C;
        this.a0 = gVar.D;
        this.f5477b0 = gVar.E;
        this.f5478c0 = gVar.F;
        this.f5479d0 = gVar.G;
        this.f5480e0 = gVar.H;
        this.f5481f0 = gVar.I;
        this.f5482g0 = gVar.J;
        this.h0 = gVar.K;
        this.f5483i0 = gVar.L;
        this.f5484j0 = gVar.M;
        this.f5485k0 = gVar.N;
        this.f5486l0 = gVar.O;
        this.f5487m0 = gVar.P;
    }

    @Override // com.google.android.exoplayer2.trackselection.TrackSelectionParameters
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && a.class == obj.getClass()) {
            a aVar = (a) obj;
            if (super.equals(aVar) && this.X == aVar.X && this.Y == aVar.Y && this.Z == aVar.Z && this.a0 == aVar.a0 && this.f5477b0 == aVar.f5477b0 && this.f5478c0 == aVar.f5478c0 && this.f5479d0 == aVar.f5479d0 && this.f5480e0 == aVar.f5480e0 && this.f5481f0 == aVar.f5481f0 && this.f5482g0 == aVar.f5482g0 && this.h0 == aVar.h0 && this.f5483i0 == aVar.f5483i0 && this.f5484j0 == aVar.f5484j0 && this.f5485k0 == aVar.f5485k0) {
                SparseBooleanArray sparseBooleanArray = aVar.f5487m0;
                SparseBooleanArray sparseBooleanArray2 = this.f5487m0;
                int size = sparseBooleanArray2.size();
                if (sparseBooleanArray.size() == size) {
                    int i5 = 0;
                    while (true) {
                        if (i5 >= size) {
                            SparseArray sparseArray = aVar.f5486l0;
                            SparseArray sparseArray2 = this.f5486l0;
                            int size2 = sparseArray2.size();
                            if (sparseArray.size() == size2) {
                                for (int i6 = 0; i6 < size2; i6++) {
                                    int indexOfKey = sparseArray.indexOfKey(sparseArray2.keyAt(i6));
                                    if (indexOfKey >= 0) {
                                        Map map = (Map) sparseArray2.valueAt(i6);
                                        Map map2 = (Map) sparseArray.valueAt(indexOfKey);
                                        if (map2.size() == map.size()) {
                                            for (Map.Entry entry : map.entrySet()) {
                                                a1 a1Var = (a1) entry.getKey();
                                                if (map2.containsKey(a1Var) && d0.a(entry.getValue(), map2.get(a1Var))) {
                                                }
                                            }
                                        }
                                    }
                                }
                                return true;
                            }
                        } else {
                            if (sparseBooleanArray.indexOfKey(sparseBooleanArray2.keyAt(i5)) < 0) {
                                break;
                            }
                            i5++;
                        }
                    }
                }
            }
        }
        return false;
    }

    @Override // com.google.android.exoplayer2.trackselection.TrackSelectionParameters
    public final int hashCode() {
        return ((((((((((((((((((((((((((((super.hashCode() + 31) * 31) + (this.X ? 1 : 0)) * 31) + (this.Y ? 1 : 0)) * 31) + (this.Z ? 1 : 0)) * 31) + (this.a0 ? 1 : 0)) * 31) + (this.f5477b0 ? 1 : 0)) * 31) + (this.f5478c0 ? 1 : 0)) * 31) + (this.f5479d0 ? 1 : 0)) * 31) + (this.f5480e0 ? 1 : 0)) * 31) + (this.f5481f0 ? 1 : 0)) * 31) + (this.f5482g0 ? 1 : 0)) * 31) + (this.h0 ? 1 : 0)) * 31) + (this.f5483i0 ? 1 : 0)) * 31) + (this.f5484j0 ? 1 : 0)) * 31) + (this.f5485k0 ? 1 : 0);
    }
}
